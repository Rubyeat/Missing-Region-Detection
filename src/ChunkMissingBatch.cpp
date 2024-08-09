#include <cstdio>
#include "../headers/utilities.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
/* 20 Species */
//vector<string> speciesName = {"armadillo", "baboon", "cat", "chicken", "chimp", "clouded_leopard", "colobus_monkey", "cow", "dog", "dusky_titi","elephant", "ferret", "galago", "gibbon", "gorilla", "guinea_pig", "heagehog","horse","human", "orangatun"};
//vector<string> file1Name = {"armadillo_counts_dumps.fa", "baboon_counts_dumps.fa", "cat_counts_dumps.fa", "chicken_counts_dumps.fa", "chimp_counts_dumps.fa", "clouded_leopard_counts_dumps.fa", "colobus_monkey_counts_dumps.fa", "cow_counts_dumps.fa", "dog_counts_dumps.fa", "dusky_titi_counts_dumps.fa","elephant_counts_dumps.fa", "ferret_counts_dumps.fa", "galago_counts_dumps.fa", "gibbon_counts_dumps.fa", "gorilla_counts_dumps.fa", "guinea_pig_counts_dumps.fa", "heagehog_counts_dumps.fa","horse_counts_dumps.fa","human_counts_dumps.fa", "orangatun_counts_dumps.fa"};
//vector<string> file2Name = {"armadillo.fa", "baboon.fa", "cat.fa", "chicken.fa", "chimp.fa", "clouded_leopard.fa", "colobus_monkey.fa", "cow.fa", "dog.fa", "dusky_titi.fa","elephant.fa", "ferret.fa", "galago.fa", "gibbon.fa", "gorilla.fa", "guinea_pig.fa", "heagehog.fa","horse.fa","human.fa", "orangatun.fa"};
//vector<int> sequencCount = {4938920, 5082025, 4746218, 4519823, 4616057, 4578219, 5386352, 5231428, 4369232, 4686137, 4979619, 4965553, 5209548, 5528445, 4607202, 4599354, 4574284, 4643538, 4700560, 5132068, 4641652, 5032268, 5498450, 4887515, 5068389, 4825265, 5202090, 5065741, 4646332};

/*ecoli */
//vector<string> speciesName = {"536a", "APEC01", "ATCC8739", "B4Sb227", "B18BS512", "BW2952", "CB9615", "CFT073", "D1Sd197", "DH10B","E24377A", "E234869", "ED1a", "EDL933", "F2a301", "F2a2457T", "F5b8401","HS","IAI1", "IAI39","MG1655","S88", "Sakai","SE11","SMS35", "SSSs046","UMN026","UTI89", "W3110"};
//vector<string> file1Name = {"536_counts_dumps.fa", "APEC01_counts_dumps.fa", "ATCC8739_counts_dumps.fa", "B4Sb227_counts_dumps.fa", "B18BS512_counts_dumps.fa", "BW2952_counts_dumps.fa", "CB9615_counts_dumps.fa", "CFT073_counts_dumps.fa", "D1Sd197_counts_dumps.fa", "DH10B_counts_dumps.fa","E24377A_counts_dumps.fa", "E234869_counts_dumps.fa", "ED1a_counts_dumps.fa", "EDL933_counts_dumps.fa", "F2a301_counts_dumps.fa", "F2a2457T_counts_dumps.fa", "F5b8401_counts_dumps.fa","HS_counts_dumps.fa","IAI1_counts_dumps.fa", "IAI39_counts_dumps.fa","MG1655_counts_dumps.fa","S88_counts_dumps.fa", "Sakai_counts_dumps.fa","SE11_counts_dumps.fa","SMS35_counts_dumps.fa", "SSSs046_counts_dumps.fa","UMN026_counts_dumps.fa","UTI89_counts_dumps.fa", "W3110_counts_dumps.fa"};
//vector<int> sequencCount = {4938920, 5082025, 4746218, 4519823, 4616057, 4578219, 5386352, 5231428, 4369232, 4686137, 4979619, 4965553, 5209548, 5528445, 4607202, 4599354, 4574284, 4643538, 4700560, 5132068, 4641652, 5032268, 5498450, 4887515, 5068389, 4825265, 5202090, 5065741, 4646332};

/*
vector<string> speciesName = {"536a", "APEC01", "CFT073", "E234869", "ED1a", "S88","UTI89"};
vector<string> file1Name={"536a_counts_dumps.fa", "APEC01_counts_dumps.fa", "CFT073_counts_dumps.fa", "E234869_counts_dumps.fa", "ED1a_counts_dumps.fa", "S88_counts_dumps.fa", "UTI89_counts_dumps.fa"};
vector<int> sequencCount = {4938920, 5082025,5231428,4965553,5209548,5032268,5065741};
*/
/*
vector<string> speciesName = {"APEC01", "CFT073", "E234869", "ED1a", "S88","UTI89"};
vector<string> file1Name={ "APEC01_counts_dumps.fa", "CFT073_counts_dumps.fa", "E234869_counts_dumps.fa", "ED1a_counts_dumps.fa", "S88_counts_dumps.fa", "UTI89_counts_dumps.fa"};
vector<int> sequencCount = { 5082025,5231428,4965553,5209548,5032268,5065741};
*/

vector<string> speciesName = {"536a", "APEC01", "CFT073", "ED1a", "S88","UTI89"};
vector<string> file1Name={"536a_counts_dumps.fa", "APEC01_counts_dumps.fa", "CFT073_counts_dumps.fa", "ED1a_counts_dumps.fa", "S88_counts_dumps.fa", "UTI89_counts_dumps.fa"};
vector<int> sequencCount = {4938920, 5082025,5231428,5209548,5032268,5065741};


/*
vector<string> speciesName = {"APEC01", "CFT073", "ED1a", "S88","UTI89"};
vector<string> file1Name={"APEC01_counts_dumps.fa", "CFT073_counts_dumps.fa", "ED1a_counts_dumps.fa", "S88_counts_dumps.fa", "UTI89_counts_dumps.fa"};
vector<int> sequencCount = {5082025,5231428,5209548,5032268,5065741};
*/

/*Fish*/
/*
vector<string> speciesName = {"NC_009057", "NC_009058", "NC_009059", "NC_009060", "NC_009062", "NC_009063", "NC_009064", "NC_009065", "NC_009066", "NC_009067","NC_009459", "NC_010205", "NC_011168", "NC_011169", "NC_011170", "NC_011171", "NC_011177","NC_011179","NC_012055", "NC_013564","NC_013577","NC_013663", "NC_013750","NC_018814","NC_018815"};
vector<string> file1Name = {"NC_009057_counts_dumps.fa", "NC_009058_counts_dumps.fa", "NC_009059_counts_dumps.fa", "NC_009060_counts_dumps.fa", "NC_009062_counts_dumps.fa", "NC_009063_counts_dumps.fa", "NC_009064_counts_dumps.fa", "NC_009065_counts_dumps.fa", "NC_009066_counts_dumps.fa", "NC_009067_counts_dumps.fa","NC_009459_counts_dumps.fa", "NC_010205_counts_dumps.fa", "NC_011168_counts_dumps.fa", "NC_011169_counts_dumps.fa", "NC_011170_counts_dumps.fa", "NC_011171_counts_dumps.fa", "NC_011177_counts_dumps.fa","NC_011179_counts_dumps.fa","NC_012055_counts_dumps.fa", "NC_013564_counts_dumps.fa","NC_013577_counts_dumps.fa","NC_013663_counts_dumps.fa", "NC_013750_counts_dumps.fa","NC_018814_counts_dumps.fa","NC_018815_counts_dumps.fa"};;
vector<int> sequencCount = {16626, 16639, 16603, 16572, 16587, 16598, 16703, 16649, 17045, 16510, 16441, 16793, 16544, 16556, 16543, 16976, 16486, 16457, 16508, 16657, 16798, 16627, 16628, 16588, 16590};
*/

//44 species
/*vector<string> speciesName = {"armadillo", "baboon", "cat", "chicken", "chimp", "clouded_leopard", "colobus_monkey", "cow", "dog", "dusky_titi","elephant", "ferret", "galago", "gibbon", "gorilla", "guinea_pig", "heagehog","horse","human", "macaque", "marmoset",  "mouse", "mouse_lemur", "orangatun", "owl_monkey", "pig", "platypus", "rabbit", "rat", "sheep", "shrew","squirrel_monkey", "muntjak_indian", "tenrec",  "vervet", "wallaby"};
vector<string> file1Name = {"armadillo_counts_dumps.fa", "baboon_counts_dumps.fa", "cat_counts_dumps.fa", "chicken_counts_dumps.fa", "chimp_counts_dumps.fa", "clouded_leopard_counts_dumps.fa", "colobus_monkey_counts_dumps.fa", "cow_counts_dumps.fa", "dog_counts_dumps.fa", "dusky_titi_counts_dumps.fa","elephant_counts_dumps.fa", "ferret_counts_dumps.fa", "galago_counts_dumps.fa", "gibbon_counts_dumps.fa", "gorilla_counts_dumps.fa", "guinea_pig_counts_dumps.fa", "heagehog_counts_dumps.fa","horse_counts_dumps.fa","human_counts_dumps.fa", "macaque_counts_dumps.fa", "marmoset_counts_dumps.fa", "mouse_counts_dumps.fa", "mouse_lemur_counts_dumps.fa", "orangatun_counts_dumps.fa", "owl_monkey_counts_dumps.fa", "pig_counts_dumps.fa", "platypus_counts_dumps.fa", "rabbit_counts_dumps.fa", "rat_counts_dumps.fa", "sheep_counts_dumps.fa", "shrew_counts_dumps.fa", "squirrel_monkey_counts_dumps.fa", "muntjak_indian_counts_dumps.fa", "tenrec_counts_dumps.fa", "vervet_counts_dumps.fa", "wallaby_counts_dumps.fa"};
vector<string> file2Name = {"armadillo.fa", "baboon.fa", "cat.fa", "chicken.fa", "chimp.fa", "clouded_leopard.fa", "colobus_monkey.fa", "cow.fa", "dog.fa", "dusky_titi.fa","elephant.fa", "ferret.fa", "galago.fa", "gibbon.fa", "gorilla.fa", "guinea_pig.fa", "heagehog.fa","horse.fa","human.fa", "macaque.fa", "marmoset.fa", "mouse.fa", "mouse_lemur.fa", "orangatun.fa", "owl_monkey.fa", "pig.fa", "platypus.fa", "rabbit.fa", "rat.fa", "sheep.fa", "shrew.fa", "squirrel_monkey.fa", "muntjak_indian.fa", "tenrec.fa", "vervet.fa", "wallaby.fa"};
vector<int> sequencCount = {17187, 20792, 20511, 20295, 18222, 16182, 20792, 20500, 16558, 18524, 20837, 20713, 20641, 20338, 20669, 20627, 20357, 17848, 20863, 20786, 20095, 19391, 19440, 18605, 20842, 17222, 18895, 20714, 20636, 20281, 19052, 17004, 15472, 18440, 18855, 18906};*/
//21Species
//vector<string> speciesName = { "baboon", "chimp",  "colobus_monkey",  "dusky_titi", "galago", "gibbon", "gorilla", "guinea_pig", "human", "lemur", "macaque", "marmoset",  "mouse", "mouse_lemur",  "orangutan", "owl_monkey",  "rabbit", "rat", "squirrel_monkey",  "vervet"};
//vector<string> file1Name = { "baboon_counts_dumps.fa", "chimp_counts_dumps.fa", "colobus_monkey_counts_dumps.fa",  "dusky_titi_counts_dumps.fa", "galago_counts_dumps.fa", "gibbon_counts_dumps.fa", "gorilla_counts_dumps.fa", "guinea_pig_counts_dumps.fa", "human_counts_dumps.fa", "lemur_counts_dumps.fa", "macaque_counts_dumps.fa", "marmoset_counts_dumps.fa", "mouse_counts_dumps.fa", "mouse_lemur_counts_dumps.fa", "orangutan_counts_dumps.fa", "owl_monkey_counts_dumps.fa", "rabbit_counts_dumps.fa", "rat_counts_dumps.fa",  "squirrel_monkey_counts_dumps.fa", "vervet_counts_dumps.fa"};
//vector<string> file2Name = {"armadillo.fa", "baboon.fa", "cat.fa", "chicken.fa", "chimp.fa", "clouded_leopard.fa", "colobus_monkey.fa", "cow.fa", "dog.fa", "dusky_titi.fa","elephant.fa", "ferret.fa", "galago.fa", "gibbon.fa", "gorilla.fa", "guinea_pig.fa", "heagehog.fa","horse.fa","human.fa", "macaque.fa", "marmoset.fa", "mouse.fa", "mouse_lemur.fa", "orangatun.fa", "owl_monkey.fa", "pig.fa", "platypus.fa", "rabbit.fa", "rat.fa", "sheep.fa", "shrew.fa", "squirrel_monkey.fa", "muntjak_indian.fa", "tenrec.fa", "vervet.fa", "wallaby.fa"};
//vector<int> sequencCount = {1730495 , 1623548, 2023939, 2013679, 1783853, 2204624, 1815481, 1815594,  1877426, 1399362, 1678549, 1923566, 1486509, 1643829,  1581211, 2059585, 1889755, 1884088, 1948414,  1659736};
//vector<string> speciesName = {"armadillo",  "cat", "chicken",  "clouded_leopard",  "cow", "cpbat", "dog", "elephant", "ferret",  "hedgehog","horse", "muntjak_indian", "opossum",  "pig", "platypus", "rfbat", "sheep", "shrew", "tenrec",  "wallaby"};
//vector<string> file1Name = {"armadillo_counts_dumps.fa",  "cat_counts_dumps.fa", "chicken_counts_dumps.fa", "clouded_leopard_counts_dumps.fa",  "cow_counts_dumps.fa", "cpbat_counts_dumps.fa", "dog_counts_dumps.fa", "elephant_counts_dumps.fa", "ferret_counts_dumps.fa",  "hedgehog_counts_dumps.fa","horse_counts_dumps.fa", "muntjak_indian_counts_dumps.fa", "opossum_counts_dumps.fa", "pig_counts_dumps.fa", "platypus_counts_dumps.fa", "rfbat_counts_dumps.fa", "sheep_counts_dumps.fa", "shrew_counts_dumps.fa",  "tenrec_counts_dumps.fa",  "wallaby_counts_dumps.fa"};
//vector<string> file2Name = {"armadillo.fa", "baboon.fa", "cat.fa", "chicken.fa", "chimp.fa", "clouded_leopard.fa", "colobus_monkey.fa", "cow.fa", "dog.fa", "dusky_titi.fa","elephant.fa", "ferret.fa", "galago.fa", "gibbon.fa", "gorilla.fa", "guinea_pig.fa", "heagehog.fa","horse.fa","human.fa", "macaque.fa", "marmoset.fa", "mouse.fa", "mouse_lemur.fa", "orangatun.fa", "owl_monkey.fa", "pig.fa", "platypus.fa", "rabbit.fa", "rat.fa", "sheep.fa", "shrew.fa", "squirrel_monkey.fa", "muntjak_indian.fa", "tenrec.fa", "vervet.fa", "wallaby.fa"};
//vector<int> sequencCount = {17187, 20792, 20511, 20295, 18222, 16182, 20792, 20500, 16558, 18524, 20837, 20713, 20641, 20338, 20669, 20627, 20357, 17848, 20863, 20786, 20095, 19391, 19440, 18605, 20842, 17222, 18895, 20714, 20636, 20281, 19052, 17004, 15472, 18440, 18855, 18906};
//vector<int> sequencCount = {1706771 , 1838638, 744025,  1845657,  2072671, 1370440, 1517853,  2040789, 1748892, 2136267, 1523288, 1702082, 1778885, 1248626, 1271813, 1737318, 1970219, 1776277, 1788371, 1996640};
//10Species
/*
vector<string> speciesName = { "baboon", "chimp",  "colobus_monkey",  "dusky_titi",  "gibbon", "gorilla",  "human",  "macaque",   "orangutan", "owl_monkey",  "vervet"};
vector<string> file1Name = { "baboon_counts_dumps.fa", "chimp_counts_dumps.fa", "colobus_monkey_counts_dumps.fa",  "dusky_titi_counts_dumps.fa",  "gibbon_counts_dumps.fa", "gorilla_counts_dumps.fa", "human_counts_dumps.fa",  "macaque_counts_dumps.fa",   "orangutan_counts_dumps.fa", "owl_monkey_counts_dumps.fa",  "vervet_counts_dumps.fa"};
vector<int> sequencCount = {1730495 , 1623548, 2023939, 2013679,  2204624, 1815481,  1877426, 1678549,  1581211, 2059585, 1659736};
*/

//vector<string> speciesName = { "galago",  "guinea_pig",  "lemur",  "marmoset",  "mouse", "mouse_lemur",  "rabbit", "rat", "squirrel_monkey"};
//vector<string> file1Name = {  "galago_counts_dumps.fa",  "guinea_pig_counts_dumps.fa",  "lemur_counts_dumps.fa",  "marmoset_counts_dumps.fa", "mouse_counts_dumps.fa", "mouse_lemur_counts_dumps.fa",  "rabbit_counts_dumps.fa", "rat_counts_dumps.fa",  "squirrel_monkey_counts_dumps.fa"};
//vector<int> sequencCount = { 1783853, 1815594,  1399362, 1923566,  1486509, 1643829,  1889755, 1884088, 1948414};

/*vector<string> speciesName = {  "cat",  "clouded_leopard",  "cow",  "dog",  "ferret",  "horse", "muntjak_indian",   "pig",  "sheep"};
vector<string> file1Name = {  "cat_counts_dumps.fa",  "clouded_leopard_counts_dumps.fa",  "cow_counts_dumps.fa",  "dog_counts_dumps.fa",  "ferret_counts_dumps.fa",  "horse_counts_dumps.fa", "muntjak_indian_counts_dumps.fa",  "pig_counts_dumps.fa",  "sheep_counts_dumps.fa"};
vector<int> sequencCount = { 1838638,   1845657,  2072671,  1517853, 1748892,  1523288, 1702082,  1248626,  1970219};*/
//
//vector<string> speciesName = {"armadillo",    "cpbat",  "elephant",  "hedgehog", "opossum",   "platypus", "rfbat",  "shrew", "tenrec",  "wallaby"};
//vector<string> file1Name = {"armadillo_counts_dumps.fa",  "cpbat_counts_dumps.fa", "elephant_counts_dumps.fa",   "hedgehog_counts_dumps.fa", "opossum_counts_dumps.fa",  "platypus_counts_dumps.fa", "rfbat_counts_dumps.fa",  "shrew_counts_dumps.fa",  "tenrec_counts_dumps.fa",  "wallaby_counts_dumps.fa"};
//vector<int> sequencCount = {1706771 ,  1370440, 2040789,  2136267, 1778885,  1271813, 1737318, 1776277, 1788371, 1996640};

/*7 primates*/
/*

vector<string> speciesName = {"Baboon", "Common_ch", "Gibbon", "Gorrila", "Human", "Orangutan", "Pigmy_ch"};
vector<string> file1Name = {"Baboon_counts_dumps.fa", "Common_ch_counts_dumps.fa", "Gibbon_counts_dumps.fa", "Gorrila_counts_dumps.fa", "Human_counts_dumps.fa", "Orangutan_counts_dumps.fa", "Pigmy_ch_counts_dumps.fa"};;
vector<int> sequencCount = {16757, 16800, 16708, 16598, 16806, 16624, 16791};
*/



/*6 primates*/
//vector<string> speciesName = { "baboon", "chimp", "gibbon", "gorilla", "human", "orangutan"};
//vector<string> file1Name = { "baboon_counts_dumps.fa", "chimp_counts_dumps.fa", "gibbon_counts_dumps.fa", "gorilla_counts_dumps.fa", "human_counts_dumps.fa", "orangutan_counts_dumps.fa"};
//vector<int> sequencCount = {1730495 , 1623548,  2204624, 1815481,  1877426, 1581211};

//ChunkMiss
/*
vector<string> speciesName = {"chimp", "gorrila", "human"};
vector<string> file1Name = {"chimp_counts_dumps.fa", "gorrila_counts_dumps.fa", "human_counts_dumps.fa"};
vector<int> sequencCount = {1648526, 1843478, 1906376};
*/

/*8Yersina*/
/*
vector<string> speciesName = {"AAKT020000", "BX936398", "NC_003143", "NC_004088", "NC_005810", "NC_008149", "NC_008150", "NC_009381"};
vector<string> file1Name = {"AAKT020000_counts_dumps.fa", "BX936398_counts_dumps.fa", "NC_003143_counts_dumps.fa", "NC_004088_counts_dumps.fa", "NC_005810_counts_dumps.fa", "NC_008149_counts_dumps.fa", "NC_008150_counts_dumps.fa", "NC_009381_counts_dumps.fa"};
vector<int> sequencCount = {4723304, 4517345, 4653728, 4600755, 4595065, 4534590, 4702289, 4517345};
*/

/*48Avians*/
/*
vector<string> speciesName = {"ACACH", "ANAPL", "APAVI", "APTFO", "BALRE", "BUCRH", "CALAN", "CAPCA", "CARCR", "CATAU", "CHAPE", "CHAVO", "CHLUN", "COLLI", "COLST", "CORBR", "CUCCA", "EGRGA", "EURHE", "FALPE", "FULGL", "GALGA", "GAVST", "GEOFO", "HALAL", "HALLE", "LEPDI", "MANVI", "MELGA", "MELUN", "MERNU", "MESUN", "NESNO", "NIPNI", "OPHHO", "PELCR", "PHACA", "PHALE", "PHORU", "PICPU", "PODCR", "PTEGU", "PYGAD", "STRCA", "TAEGU", "TAUER", "TINMA", "TYTAL"};
vector<string> file1Name = {"ACACH_counts_dumps.fa", "ANAPL_counts_dumps.fa", "APAVI_counts_dumps.fa", "APTFO_counts_dumps.fa", "BALRE_counts_dumps.fa", "BUCRH_counts_dumps.fa", "CALAN_counts_dumps.fa", "CAPCA_counts_dumps.fa", "CARCR_counts_dumps.fa", "CATAU_counts_dumps.fa", "CHAPE_counts_dumps.fa", "CHAVO_counts_dumps.fa", "CHLUN_counts_dumps.fa", "COLLI_counts_dumps.fa", "COLST_counts_dumps.fa", "CORBR_counts_dumps.fa", "CUCCA_counts_dumps.fa", "EGRGA_counts_dumps.fa", "EURHE_counts_dumps.fa", "FALPE_counts_dumps.fa", "FULGL_counts_dumps.fa", "GALGA_counts_dumps.fa", "GAVST_counts_dumps.fa", "GEOFO_counts_dumps.fa", "HALAL_counts_dumps.fa", "HALLE_counts_dumps.fa", "LEPDI_counts_dumps.fa", "MANVI_counts_dumps.fa", "MELGA_counts_dumps.fa", "MELUN_counts_dumps.fa", "MERNU_counts_dumps.fa", "MESUN_counts_dumps.fa","NESNO_counts_dumps.fa", "NIPNI_counts_dumps.fa", "OPHHO_counts_dumps.fa", "PELCR_counts_dumps.fa", "PHACA_counts_dumps.fa", "PHALE_counts_dumps.fa", "PHORU_counts_dumps.fa", "PICPU_counts_dumps.fa", "PODCR_counts_dumps.fa", "PTEGU_counts_dumps.fa", "PYGAD_counts_dumps.fa", "STRCA_counts_dumps.fa", "TAEGU_counts_dumps.fa", "TAUER_counts_dumps.fa", "TINMA_counts_dumps.fa", "TYTAL_counts_dumps.fa"};
vector<int> sequencCount = {542005, 624714, 551345, 646987, 595348, 567565, 634859, 542469, 581713, 440849, 626959, 640754, 575981, 633653, 534168, 627045, 622780, 618393, 551358, 651808, 585996, 683608, 574147, 614378, 592348, 643171, 587081, 617328, 595010, 625810, 511362, 555969, 588441, 542842, 613892, 569452, 552842, 595089, 568258, 610087, 557756, 573043, 640780, 614443, 618553, 565035, 567399, 552245};
*/

/*10Avians*/

/*
vector<string> speciesName = {"APAVI", "BUCRH", "CATAU", "COLST", "HALAL", "HALLE", "LEPDI",  "MERNU", "PICPU", "TYTAL"};
vector<string> file1Name = {"APAVI_counts_dumps.fa", "BUCRH_counts_dumps.fa", "CATAU_counts_dumps.fa", "COLST_counts_dumps.fa", "HALAL_counts_dumps.fa", "HALLE_counts_dumps.fa", "LEPDI_counts_dumps.fa", "MERNU_counts_dumps.fa", "PICPU_counts_dumps.fa","TYTAL_counts_dumps.fa"};
vector<int> sequencCount = {551345, 567565, 440849, 534168, 592348, 643171, 587081, 511362, 610087, 552245};
*/
/*
vector<string> speciesName = {"APAVI", "BUCRH", "COLST", "LEPDI",  "MERNU", "PICPU", "TYTAL"};
vector<string> file1Name = {"APAVI_counts_dumps.fa", "BUCRH_counts_dumps.fa", "COLST_counts_dumps.fa", "LEPDI_counts_dumps.fa", "MERNU_counts_dumps.fa", "PICPU_counts_dumps.fa","TYTAL_counts_dumps.fa"};
vector<int> sequencCount = {551345, 567565, 534168, 587081, 511362, 610087,552245};
*/




void printMatrix(vector<Species> species, double **distanceMatrixFactorcount);
void printKmersWithouMissing(vector<Species> secies);
void buildTree(vector<Species> speciesOfLargeKmer, double **distanceMatrix, int bigKmer, string distanceAlgo);
int main() {
    /*ifstream f("/Users/rubyeatislam/Downloads/song-mammalian-bio/424genes/15/raxmlboot.gtrgamma/RAxML_bipartitions.final.f200"); //taking file as inputstream
    string strnewick;
    if(f) {
        ostringstream ss;
        ss << f.rdbuf(); // reading data
        strnewick = ss.str();
    }
    cout<<strnewick;*/
    //exit(0);
    for (int BigKmer = 19; BigKmer <20 ; ++BigKmer) {
        for (int SmallKmer = 16; SmallKmer < 17; ++SmallKmer) {
            int m = BigKmer - SmallKmer + 1;
            for (int Threshold = m-1; Threshold >= (m/2)  ; Threshold--) {
                //ofstream myfile ("/Volumes/Ruby Data/7primatesIntentionalMiss/SpeciesMiss/SpeciesMiss/7500/Gorrila7500/Gorrila8500v20neToOne_BKmer_" + to_string(BigKmer) + "_SKmer_ " + to_string(SmallKmer)+ "_MissThreshold_"+ to_string(Threshold)+".txt");
                int miniKmer = SmallKmer; // change one small kmer that use for not fully matched kemer
                int bigKmer = BigKmer; // K mer that used to build tree
                string fileName = ("/Volumes/RubyData/29ecoli/19-mer/Miss7Ecolis_BKmer_" + to_string(BigKmer) + "_SKmer_ " + to_string(SmallKmer)+ "_MissThreshold_"+ to_string(Threshold)+ ".txt");
                freopen( fileName.c_str(),"w",stdout);
                vector<Species> speciesOfKmerSmall;
                for (int i = 0; i < speciesName.size() ; i++) {
                    Species s(speciesName[i], miniKmer);
                    s.init("/Volumes/RubyData/29ecoli/Data" + std::to_string(miniKmer) + "/" + file1Name[i], sequencCount[i],
                           false);
                    speciesOfKmerSmall.push_back(s);

                }
                vector<Species> speciesOfLargeKmer;
                double** distanceMatrixEucledian = new double*[speciesName.size()];
                for (int i = 0; i < speciesName.size(); ++i) {
                    distanceMatrixEucledian[i] = new double[speciesName.size()];
                }
                double** distanceMatrixMahalnobis = new double*[speciesName.size()];;
                for (int i = 0; i < speciesName.size(); ++i) {
                    distanceMatrixMahalnobis[i] = new double[speciesName.size()];
                }
                double** distanceMatrixFactorcount = new double*[speciesName.size()];;
                for (int i = 0; i < speciesName.size(); ++i) {
                    distanceMatrixFactorcount[i] = new double[speciesName.size()];
                }
                for (int i = 0; i < speciesName.size() ; i++) {
                    Species s(speciesName[i], bigKmer);
                    s.init("/Volumes/RubyData/29ecoli/Data" + std::to_string(bigKmer) + "/" + file1Name[i], sequencCount[i], true);
                    speciesOfLargeKmer.push_back(s);
                }

                for(int i = 0; i < speciesOfLargeKmer.size() ; i++) {
                    speciesOfLargeKmer[i].findMissingChunk(speciesOfLargeKmer, speciesOfKmerSmall,  Threshold);
                }

                for (int j = 0; j < speciesName.size(); j++) {
                    for (int i = 0; i < speciesName.size(); i++) {
                        if(j == i) {
                            distanceMatrixEucledian[j][i] = 0;
                            distanceMatrixMahalnobis[j][i] = 0;
                            distanceMatrixFactorcount[j][i] = 0;
                            continue;
                        } else if(i < j) {
                            distanceMatrixEucledian[j][i] = distanceMatrixEucledian[i][j];
                            distanceMatrixMahalnobis[j][i] = distanceMatrixMahalnobis[i][j];
                            distanceMatrixFactorcount[j][i] = distanceMatrixFactorcount[i][j];
                        } else {
                            vector<double> v = speciesOfLargeKmer[j].calculateDistance(speciesOfLargeKmer[i], true);
                            distanceMatrixEucledian[j][i] = v[0];
                            distanceMatrixMahalnobis[j][i] = v[1];
                            distanceMatrixFactorcount[j][i] = v[2];
                        }
                    }
                }
                buildTree(speciesOfLargeKmer, distanceMatrixEucledian, bigKmer, "Eucledian");
                buildTree(speciesOfLargeKmer, distanceMatrixMahalnobis, bigKmer, "Mahalnobis");
                buildTree(speciesOfLargeKmer, distanceMatrixFactorcount, bigKmer, "FactorCount");
                printMatrix(speciesOfLargeKmer, distanceMatrixMahalnobis);
                printMatrix(speciesOfLargeKmer, distanceMatrixFactorcount);
                printMatrix(speciesOfLargeKmer, distanceMatrixEucledian);
                //Construct tree and find distance FactorCount

                delete[] distanceMatrixFactorcount;
                delete[] distanceMatrixMahalnobis;
                delete[] distanceMatrixEucledian;


            }
        }
    }

    //printKmersWithouMissing(speciesOfLargeKmer);

    return 0;
}

void printMatrix(vector<Species> species, double **distanceMatrixFactorcount) {

    //fclose (stdout);
    string xxx = ("../files/Output/matrixFactorCount_" + to_string(species[0].kmer) + ".txt");
    //freopen (xxx.c_str(),"w",stdout);
    printf("%d\n", speciesName.size());
    for (int k = 0; k < speciesName.size(); ++k) {
        cout << species[k].name << " ";
        for (int i = 0; i <speciesName.size() ; ++i) {
            printf("%.2lf ", distanceMatrixFactorcount[k][i]);
        }
        printf("\n");
    }
}

void printKmersWithouMissing(vector<Species> secies){
    for (int i = 0; i < secies.size(); ++i) {
        Species s = secies[i];
        freopen (s.name.c_str(),"w",stdout);
        for (int j = 0; j < s.kmers.size(); ++j) {
            if(s.chunkMissing[j] == false) {
                cout << ">" << s.kmerCount[s.kmers[j]] << endl;
                cout << s.kmers[j] << endl;
            }
        }
    }
}