#define PROBLEM "https://yukicoder.me/problems/no/502"
#include "../product_embedding.hpp"

#include <iostream>
using namespace std;

using S = int;
constexpr S md = 1000000007;
S op(S l, S r) { return (long long)l * r % md; }
S e() { return 1; }
S getter(long long i) { return i + 1 >= md ? (i + 1) % md : i + 1; }

using PE = product_embedding<S, op, e, getter, 500000>;

int main() {

    // PE::prerun("tmp.txt", md);
    PE pe({154425679,765215884,239137314,324590815,320850369,535306323,128331541,730003669,127854629,68532152,340932987,254338029,898803989,674491123,493655505,251306425,259855775,593087407,265422028,95913148,522500070,256672199,137344388,309580163,436259217,49219551,317285481,370614509,693905371,198765995,531455892,270443786,44437648,874787548,606272843,706600345,381290327,51097783,585796974,819525737,180376533,388198318,386917546,452786027,130533111,284690746,570760103,159871069,400410125,756510227,782661820,446376692,896201366,14347989,636948742,461538793,692456673,780137052,286501416,741559429,312928258,373625089,859795051,62231769,224187326,118400353,259634237,127126822,672024870,143233221,280722631,904979926,442337626,848414261,47582483,430176889,425539730,760087782,625472453,833233839,179068927,74792374,849112519,364700958,667086353,730572334,803403664,641818857,568162288,220759788,45903891,378116995,178865174,781191203,592912710,987067230,769139983,760747386,842172743,452690857,411391819,846235115,320184863,696751979,25052934,981215369,508320828,480635572,479664364,893360654,693638185,772311301,320682026,829299408,772112127,989089403,357898277,693523718,210162699,373129563,236298815,174248434,573122989,485915847,61272981,553999534,266866670,657447803,76906182,478924176,213078365,859690362,228958440,960934029,22551789,631981910,958283660,181634857,552495713,556475847,927353503,555440921,813918902,301438702,846069263,765955471,71128737,689977629,442736599,427806002,503842865,805007846,958781574,631669840,93256917,446545810,230205945,156812247,585215735,813901903,406672404,626417285,498314303,480546408,196920520,71016740,418579714,576109775,915485899,102165839,108171745,102961810,580832084,928405881,566891421,155800333,908071730,45316392,959781414,991695671,203945318,744781137,205293590,418677910,781180475,815216264,302525941,166235284,176289856,992953841,192836411,486719996,744995581,952023126,360915473,466206933,371268589,56253902,654192936,862696474,876808219,901956344,197619922,610736578,239460553,879060404,440010929,44477293,69815442,144606518,713174535,22821164,112598148,279352102,804535491,158956004,581209057,126041703,504119489,390892182,458300301,178476772,678810675,72173277,1168032,656309926,662269849,80625326,561710539,678004120,643754390,835205184,336355107,255080632,2175218,312802419,610421298,303124457,702749655,431599668,985079566,742696945,9562498,878757873,193392205,871078581,735846171,227065422,763529281,18637737,613612402,854701986,179633312,33373395,432833001,542003856,658002393,978034879,435315496,317131436,287133920,332805486,605526640,462957464,409189669,684748104,470458657,676534046,135429476,529805238,625026020,565053009,656500446,868693605,953318493,698546201,405213220,144097587,484808725,561387199,70551069,859393439,567834554,583928324,597190452,547788728,504489407,332854982,293645896,567328819,342450842,806793499,503164022,609979702,54437756,439137554,967793584,20534379,923578971,147223227,539016656,688876125,893209033,796382388,840139990,730919189,550462413,711611210,806435288,252174831,47101563,758866930,105086212,341867995,785325063,641933732,236953746,671430927,322156546,134035071,358739082,824826210,412863369,943801534,234533302,951393969,754534558,610163521,815308917,89350789,890910523,708684908,325500319,497996808,130452487,126735546,64618167,60852039,306114299,565631205,922803915,284689785,498301124,462436434,387481592,401254544,119743801,406331557,287486752,80773496,184420950,361765934,866600748,84362377,504351002,333945489,31975682,452475549,588873015,533117457,32232146,486723918,426867684,483723975,891721304,954059951,400867040,268044954,356976688,881382685,296986331,702718326,404726216,583632287,88204731,225693878,261157267,114887677,612880558,10490336,60602269,585515180,665484351,246815294,381322973,79890653,401605413,528074820,326694281,239755969,176625346,529682560,423958360,124311430,432806630,982245079,559553311,795333466,984263529,275615578,395847632,867283327,863878469,280553073,226395803,423812190,129565935,896483478,767432374,359231645,890304946,70293416,353514926,508876323,943944885,963168042,497604354,448439202,938721616,407604522,599336510,974479445,848139249,750978032,831017622,90225106,988877567,725672480,594902652,635287650,283860904,957578451,593173090,13971249,837092784,497805091,355730979,176955650,932300925,879888682,872300195,914638719,908185028,637701857,274213459,295517078,206695916,437731569,121878572,293836270,231344872,399306433,576423924,467136396,644755588,236136628,150746152,184595545,806238671,446948823,916956716,854969564,699893458,20507043,735213096,773825282,728150583,452660068,307325882,254305151,680985855,585485935,469527762,756706728,436967518,99694684,374977203,904321214,120587730,347752861,48727915,876705954,585221078,840636483,927319698,690035995,840329793,700090656,247724474,153609515,291413692,562301971,515800986,445281967,851270995,412358539,329540521,309758083,808673185,277920306,625769912,791439107,326583237,689323995,999125393,770979219,444719483,263928585,856610160,617827987,86460789,210908671,200071751,550789276,428415677,17656876,215286988,211522697,173070960,460197889,640487013,541078827,968519561,540294739,580308632,677376325,555879706,375610483,424087298,710840190,917997071,615281020,187683594,264903208,884956685,155300868,170128067,454826698,638392483,480072169,86782731,40567464,941193164,707217942,653335848,265870065,879859327,768895700,170174253,61889052,919938201,631218826,78566901,680721192,105457548,11914058,55294049,87032747,84828105,141396459,535124969,456350873,892703316,40187643,949259093,930575478,96910924,542908512,745099961,186061281,748613292,584020356,567724120,881349060,909341003,72052641,530061306,303181985,573761690,172361554,469231646,217431174,784543327,79530370,955697957,961681048,948601104,9332981,125278005,675606117,52560909,770771595,918581521,269999561,674154719,794308874,176533977,220403520,682553022,357362351,320165480,557065750,385102619,684432692,463115236,782821995,859140231,411056064,51199704,133086169,622133658,393243468,375213523,381194823,750141382,114185936,32670910,653509839,930064692,788612637,202480874,415977459,212300655,152860303,712672955,759725918,671312022,639869034,504963045,473473820,426466899,622916487,355503089,183838274,490558243,235433287,572118876,675179085,310017655,389802984,850545239,748579445,529044576,630254887,463973039,523557355,457563361,579860249,272305628,652878075,972359776,943257948,168295927,469496867,803442837,576368180,850193395,572875519,652522422,633688652,133565913,271503247,861042003,241284437,512033723,514119856,9538856,933953842,183794230,391976992,960241744,426292481,484897212,445840538,333561166,76327835,651312530,174672293,813036759,719042234,516658941,534304194,816780243,501161235,86221214,628683031,821910109,98567206,583684063,480451972,819037323,371511631,235002420,109194711,260817848,97083947,303381619,994645101,78913819,844521878,920520866,184939782,84338468,543444454,64384177,866378793,121749985,168834920,101930035,67970904,602599440,173934408,75192947,69189107,290285303,256485812,650858189,296379142,827528438,219690172,883822087,708704445,824776044,711748660,367366531,945017069,561416664,715329160,873607871,161088768,246433365,537693653,453477629,91127974,177402418,481716075,672788891,518595981,381189628,677146774,749634553,360533680,333464263,582696236,57398017,248356194,967000969,716061677,406784511,317337170,830241054,368865623,538167662,797021324,635371486,628714670,228959196,330064107,598353224,822198355,20478803,929280842,523435578,248289589,536202454,225349519,723305666,916598854,306043565,989878987,235636475,383769245,993403515,521050293,490494548,179826323,67678090,334981993,29282449,173477647,916417526,77062636,861878609,613609412,272306706,799449009,367297125,361602762,513633847,410086690,699226235,308983561,882010072,529209769,451333393,929311505,854539504,286605926,613372702,373233941,869178903,530065584,580441855,972885094,774801459,298379082,951314502,186897243,768026040,300924477,289563888,370878355,299132560,179667112,975370566,159339570,288750227,33589455,181960806,423418211,231094107,958627796,933892879,204465701,320901064,11376486,948793385,851381244,850505882,819887801,693636042,848202713,239286036,950992808,364469565,474574845,386689446,980090173,135856070,955544480,641205806,842148361,502517837,709774427,685513799,663631995,796442013,658513093,68104291,154700774,572614387,807466668,767168339,312061529,852051762,589348302,881592915,785682645,3432864,45194344,542894442,574488819,127005977,581027547,907117912,313260240,766324182,584591923,444272018,793581462,298821260,554444610,938105959,236375865,735839001,10261332,764261789,285329131,126560058,21500205,709709565,28095072,660523133,444819108,751330495,405703500,213253632,970827958,683481929,858299626,840613240,327551015,397319289,703131101,92691494,555625613,783030040,176528128,129450157,520241358,498782838,493109486,493665301,236160518,363669508,985668291,59601825,713605375,482561512,803423713,475434079,401911921,46572038,611502923,497619345,962959935,295451985,601315743,375147885,155753134,20812760,875080580,154993051,881664277,29652507,427867963,716451321,11579646,987058554,169488353,527229377,231333046,505928549,645779627,108887270,173578771,957098716,398644409,305922627,315223656,696414741,605234265,926950466,584975125,483054199,705527243,440941952,898543811,295160262,728996697,436033213,972737513,190281544,838700819,467531099,773941030,535493664,830220536,394753431,792159621,558279250,629971830,936841022,974736873,963705989,34668250,717286439,485436951,655616458,783458935,146829501,811998840,797837133,120785758,295133276,296882576,652626161,697763688,830403380,828153100,113754074,401690098,764676164,266897277,973170822,10362291,967932245,238846861,607583803,909153904,146915147,838415593,128086576,909149829,69930096,808184996,709837431,889985145,286024165,735177530,820857626,961705801,516172145,79782876,988831445,278827440,850848853,524578549,728017176,814292702,252606479,401957392,699406735,588988205,674170723,911592914,219667109,179224363,701717307,441222934,488569767,693989231,686147487,128297370,531207251,786619483,832114303,224413730,165763432,947070234,886594,310677463,907226433,978617893,543355357,429506686,286816357,284855760,151548336,102774345,112471673,456346849,926653341,530617498,891805011,574178368,761032643,503174541,330883884,74096468,250774525,120491500,566810883,684439619,353736423,513352670,55571229,309727085,813546786,319278765,294012465,220767203,839109152,280203863,483013149,565558826,361471522,928500644,984786082,566542488,516361878,204949454,857243005,493836675,693011163,615233397,314535145,646505351,914955458,177118942,397958408,208133842,308942519,597889032,194186266,289230591,496600690,539511691,979763505,966597529,300225250,681975630,308442823,459503082,316665093,627026355,936501381,3549100,9833475,282559858,521353311,469390735,604707729,828749369,710223356,985103296,921081227,285800211,207716191,10114595,491612871,820269427,516307669,380704959,437002225,141725243,964967492,691203333,79168344,151605235,214430247,38971735,845747298,526233761,158227054,183855559,875980572,799687318,882615798,521806953,656493204,531872325,445043036,818913597,447026174,398717425,270895874,516879474,313769453,214101440,153633190,517116565,311985675,460432881,42205357,974923794,424331887,892826797,905280257,22201722,59419209,109544715,656411772,141903201,307686152,134862395,937268660,526581556,599858406,157937045,754170278,777301434,135146064,592337752,781766545,746189840,929222602,53066896,616847450,150551528,262973511,264899621,35904589,647123497,953112837,350216985,708485910,898818440,488269560,374635069,605312927,623525175,135959858,928008446,910625884,602556510,297891879,577238736,142057673,878189348,651365913,649443433,470239448,618237544,318796349,748994106,793932169,854109812,135792740,486390109,648505454,305058244,991034426,917022570,460819448,643969194,447380502,264467296,840168813,115738369,40615595,299233746,714493133,144170566,868851860,214685620,944866375,119148644,313847902,605716596,925858250,630851415,608056268,392018728,126157888,459002051,517172231,940225628,576028435,829474423,376760375,163945185,348117018,956726374,268248915,614975896,762136657,314011629,49827371,903167053,705006848,896853618,226216284,937364033,141908525,255116299,516825703,266514970,512418029,40204652,57472209,559898931,430273675,968221161,434607182,548516109,506057819,218721924,29947631,735726476,856955608,207679775,645317272,862820775,999804659,300967179,910288489,882015228,581364849,492499975,958968033,176099993,13858804,281940047,374637225,239583973,538696965,137794596,760808283,351677218,348013774,715936778,933065809,498660327,918023976,503074397,340817323,208219034,198580309,404119656,78632479,537003060,802627083,887969008,308266140,838648996,583405711,299990849,540901493,198153246,474031138,696171557,831586362,32363865,378336793,870654425,329135888,652134392,151676561,465919361,323600304,559125908,129103921,573144060,967671123,12400734,817575575,934314467,80312974,535774927,766613421,416691806,280643051,407116709,4735689,67211318,427546209,571224789,398704666,317577122,263760799,389516025,891163822,349578992,571074974,793576726,478488294,416109342,263768133,74685992,951345490,866734664,907474137,647601223,122458821,464832675,967322211,657790566,187240726,933174799,628833969,845517915,331297234,129370535,686464200,382380063,822136523,686890517,101641621,109370678,122920268,647570898,702037203,37010,527743456,741122135,592244688,770035472,485086132,851827317,416838614,343794737,940768740,594515670,954598413,421490909,833090398,407593972,855278207,563574659,824632976,438400842,2036913,549196067,870671513,318033666,35608374,462288713,480141364,651498835,603848010,700949306,224348714,130670817,722169164,315901554,264310070,947254347,936441026,983119026,74557857,621515378,813860911,976587743,923588087,316870610,605610821,55495594,893069870,69896863,467366281,806492269,833893594,840422951,71516689,523336611,900441591,923579338,35425154,38279936,123325141,63921380,713751213,467984953,972299577,42802690,417788457,998479655,659785173,768280862,392638147,776093804,414864601,446871403,759328930,910595981,275403188,318577889,897719841,536958487,993406491,119799447,173400533,640138246,191004894,986412979,906801883,253107496,298497794,215673297,341723481,531927681,727436309,137588356,707360018,36020737,86357528,307338887,980102466,172463920,887937008,417835155,779940780,962547003,334604061,742782803,32512198,131641010,683619030,684981290,540256121,252246929,18171660,860858371,468631339,317700170,817629854,796556259,880230191,728742823,998490050,844814877,165895123,448736108,324252990,908720301,337616302,466994532,385883045,981603888,889779905,139635922,489311111,961088136,264238004,803703780,334245155,12239697,608851060,631674180,804574701,215990541,43570535,115161251,25933379,100426582,780096708,847369932,392490432,445432258,430218201,160345262,587061572,775297507,257328460,557139203,728618109,747264637,370747676,567832062,446614272,270978436,61843977,369630198,156649134,733056709,801654092,975891125,901696468,31054357,813352600,14941531,782946951,134719690,57401729,636197147,365812842,308782389,678658966,884375202,600573277,739913965,427605963,669547239,864120396,879058325,531879676,472122964,507642269,94715209,959112282,355955385,599426708,635157329,123435568,27764257,240841041,782474429,696344692,786161817,504078452,43904415,507486071,423008694,687621042,802557712,780412030,812274355,808548321,612140018,183673658,226607575,579935665,514215573,463529678,995634944,83884403,257445813,616078125,473755149,887631902,896543738,210829251,698460466,460490974,675092148,717674558,829280454,542808862,703851260,383184702,594295071,319778185,897935538,170011342,73394226,242530975,348917606,859696151,90550762,373384392,8783444,935484570,147866728,83332859,247014639,143816872,963324615,619894154,212247559,886582329,896664842,977829731,801372774,387479771,873065942,755143046,907283245,412343377,533305182,994002121,117440262,428762531,421502223,390414986,11464121,838014253,294583152,84585634,235760511,422857691,475146318,93285578,847844337,437571190,753918871,208603648,642467254,151688207,116617568,323893554,44445830,739556773,551139491,149675236,10391517,451280725,250660597,559462428,382303514,19115104,454349324,930773209,691080229,781323882,362819303,682913341,591296047,704368844,859816232,133142036,365809344,731442464,194952366,862215083,804575082,762789008,740847851,488737956,621096235,539197349,584450167,761926215,124973890,302988703,845072047,545363266,782418052,436668623,922340757,562672864,344420596,702004987,440070120,628379708,707761253,750621462,63009306,403352909,955210857,937455520,755584163,540043009,372881965,557047591,922024154,114096953,249504551,25850638,292800809,429218811,232391599,377228544,332643245,689006015,36207330,23032539,639500985,609389441,326089210,63822736,885352365,156377140,345528248,660323413,290155719,428009285,53052898,648494586,605695870,940747515,721881135,585795511,950952023,824706291,837234644,487112530,536480150,867142190,72217810,749273245,368655735,129184184,130851348,268474930,929390237,935909240,770799982,305688580,535450160,913809738,392984940,716948895,983177105,558499520,591846193,572789576,153401916,192885918,105913853,720192832,582251898,289071114,681816445,449028321,950798289,810063224,715027976,343052520,38010150,758837614,732172559,639603896,178969967,891222436,124915067,42314779,271562554,105428167,234396670,577647546,384110514,13821732,500981106,689519800,792619328,647990374,206180070,351205377,212347225,131082877,751401999,90410496,954570084,457435966,219637260,719138594,164750635,928572660,743674526,342482841,700846935,120940427,835224189,669423452,107434601,977720159,908199545,371839329,953046713,408216062,810849166,290074972,628903426,480879969,162428394,940694455,921432754,260049095,242668634,350907446,295698663,83192189,885827396,982697625,132418141,399003502,239432012,93008547,269634492,884786825,598692573,461296392,910393607,364031854,222172182,376029723,43918778,119218821,719925821,65996785,463213033,949130508,916248688,899022334,165913492,346959896,884121178,493456319,35833370,297836008,595725024,662403645,459304285,178986608,782282473,712417204,750302163,210592857,26558224,644996308,874469767,377813490,684175489,22605651,2236824,106950450,703634042,901988212,133141755,472471904,941285791,622966133,106812548,2052842,783202594,449286893,498240399,355673775,858241490,208497848,881663871,257796059,420736049,321989418,980140382,85511658,518643004,826125961,495320833,982193294,29790666,887216814,421165580,678018212,113121150,16914822,36116834,884532176,626061769,654172947,983372920,444702892,676675388,704999970,868009506,817922003,132827328,475052339,803320285,982586714,812926334,281264813,650656439,220365171,340294200,992138915,805211403,688996194,541349909,719966575,476618738,749566813,766606183,561736345,257997026,592761908,850132505,538230213,546297192,37052564,305166285,342887427,795740047,113998310,473726690,324229855,190127640,465867313,402096819,64428300,643963468,257194839,500053922,483090824,509737199,804909510,878794097,736287906,644674088,206700244,401994396,217119883,24832439,451071894,294156627,795404724,834907119,745150583,858692123,2614816,513815442,855833464,924430943,843478507,325554757,340465164,97525295,284831494,270686930,553319924,905074152,6912697,682951680,652660695,523326346,139011494,932033875,42981650,616939910,268198549,504986360,328537811,471390681,759247613,622777956,542663172,176712338,223533122,839038250,721647656,85125521,131468250,185202134,913607212,186830706,240823831,438930187,246085046,432915726,497410835,473744668,751373464,22286659,930036929,358163450,144557606,440786693,515531577,899058414,0});

    long long N;
    cin >> N;
    if (N > md) N = md;
    cout << pe.prod(0, N) << '\n';
}
