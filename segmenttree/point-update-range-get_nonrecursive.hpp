#pragma once
#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

// CUT begin
// Nonrecursive Segment Tree (point-update, range-get)
// - Conditions for operations:
//   - datamerge: [TDATA, TDATA] -> TDATA, e(x, y) == e(y, x)
//   - data2ret: [TDATA, TQUERY] -> TRET
//   - retmerge: [TRET, TRET] -> TRET, g(defaultRET, x) == x, g(x, y) = g(y, x)
//   - commutability f(e(x, y), q) == g(f(x, q), f(y, q))
template<typename TDATA, typename TRET, typename TQUERY>
struct NonrecursiveSegmentTree
{
    int N;
    TRET defaultRET;
    virtual TDATA datamerge(const TDATA &, const TDATA &) = 0;
    virtual TRET data2ret(const TDATA &, const TQUERY &) = 0;
    virtual TRET retmerge(const TRET &, const TRET &) = 0;
    std::vector<TDATA> data;
    inline TDATA& at(int i) { return data[i]; }

    inline void _merge(int i) { at(i) = datamerge(at(i << 1), at((i << 1) + 1)); }
    void initialize(const std::vector<TDATA> &seq, TRET RET_ZERO) {
        N = seq.size();
        defaultRET = RET_ZERO;
        data = seq;
        data.insert(data.end(), seq.begin(), seq.end());
        for (int i = N - 1; i; i--) _merge(i);
    }
    NonrecursiveSegmentTree() = default;
    void update(int pos, const TDATA &x) {
        assert(pos >= 0 and pos < N);
        at(pos + N) = x;
        for (int i = pos + N; i > 1;) i >>= 1, _merge(i);
    }

    // [l, r), 0-indexed
    TRET get(int l, int r, TQUERY query = NULL) {
        assert(l >= 0 and r <= N);
        TRET retl = defaultRET, retr = defaultRET;
        l += N, r += N;
        while (l < r) {
            if (l & 1) retl = retmerge(retl, data2ret(data[l++], query));
            if (r & 1) retr = retmerge(data2ret(data[--r], query), retr);
            l >>= 1, r >>= 1;
        }
        return retmerge(retl, retr);
    }

    template<typename T1, typename T2, typename T3>
    friend std::ostream &operator<<(std::ostream &os, NonrecursiveSegmentTree<T1, T2, T3> s) {
        os << "[SegmentTree (len: " << s.N << ')';
        for (int i = 0; i < s.N; i++) os << s.at(i + s.N) << ',';
        os << "]";
        return os;
    }
};


// Range Minimum Query
// - get: return min(x_l, ..., x_{r - 1})
template <typename T>
struct RangeMinimumQuery : public NonrecursiveSegmentTree<T, T, bool>
{
    using SegTree = NonrecursiveSegmentTree<T, T, bool>;
    T datamerge(const T &vl, const T &vr) override { return std::min(vl, vr); };
    T data2ret(const T &v, const bool &q) override { return v; }
    T retmerge(const T &vl, const T &vr) override { return std::min(vl, vr); };
    RangeMinimumQuery(const std::vector<T> &seq, T defaultmin) : SegTree::NonrecursiveSegmentTree() {
        SegTree::initialize(seq, defaultmin);
    };
};

// Range Maximum Query
// - get: return max(x_l, ..., x_{r - 1})
template <typename T>
struct RangeMaximumQuery : public NonrecursiveSegmentTree<T, T, bool>
{
    using SegTree = NonrecursiveSegmentTree<T, T, bool>;
    T datamerge(const T &vl, const T &vr) override { return std::max(vl, vr); };
    T data2ret(const T &v, const bool &q) override { return v; }
    T retmerge(const T &vl, const T &vr) override { return std::max(vl, vr); };
    RangeMaximumQuery(const std::vector<T> &seq, T defaultmax) : SegTree::NonrecursiveSegmentTree() {
        SegTree::initialize(seq, defaultmax);
    };
};

template<typename T>
struct PointUpdateRangeSum : public NonrecursiveSegmentTree<T, T, bool>
{
    using SegTree = NonrecursiveSegmentTree<T, T, bool>;
    T datamerge(const T &vl, const T &vr) override { return vl + vr; };
    T data2ret(const T &v, const bool &q) override { return v; }
    T retmerge(const T &vl, const T &vr) override { return vl + vr; };
    PointUpdateRangeSum(const std::vector<T> &seq, T zero) : SegTree::NonrecursiveSegmentTree() {
        SegTree::initialize(seq, zero);
    };
};

// Range Counting less than q Query
// - get: return (#{i | l <= i < r, x_i < q}, total sum of them).
template <typename T>
struct CountAndSumLessThan : public NonrecursiveSegmentTree<std::vector<std::pair<T, T>>, std::pair<int, T>, T>
{
    using TDATA = std::vector<std::pair<T, T>>;
    using TRET = std::pair<int, T>;
    using TQUERY = T;
    TDATA datamerge(const TDATA &vl, const TDATA &vr) override {
        TDATA ret = vl;
        ret.insert(ret.end(), vr.begin(), vr.end());
        std::sort(ret.begin(), ret.end());
        if (ret.size()) {
            ret[0].second = ret[0].first;
            for (size_t i = 1; i < ret.size(); i++) ret[i].second = ret[i - 1].second + ret[i].first;
        }
        return ret;
    }
    TRET data2ret(const TDATA &vec, const TQUERY &q) override {
        int i = std::lower_bound(vec.begin(), vec.end(), std::make_pair(q, q)) - vec.begin();
        if (!i) return std::make_pair(0, 0);
        else return std::make_pair(i, vec[i - 1].second);
    }
    TRET retmerge(const TRET &l, const TRET &r) override {
        return std::make_pair(l.first + r.first, l.second + r.second);
    }
    using SegTree = NonrecursiveSegmentTree<TDATA, TRET, TQUERY>;
    CountAndSumLessThan(const std::vector<T> &seq) : SegTree::NonrecursiveSegmentTree(){
        std::vector<TDATA> init;
        for (auto x : seq) init.emplace_back(TDATA{std::pair<T, T>(x, x)});
        SegTree::initialize(init, TRET(0, 0));
    }
};
