#include <cstdio>
#include "../headers/utilities.h"
#include "Distance.h"
using namespace std;
/* 20 Species */
//vector<string> speciesName = {"armadillo", "baboon", "cat", "chicken", "chimp", "clouded_leopard", "colobus_monkey", "cow", "dog", "dusky_titi","elephant", "ferret", "galago", "gibbon", "gorilla", "guinea_pig", "heagehog","horse","human", "orangatun"};
//vector<string> file1Name = {"armadillo_counts_dumps.fa", "baboon_counts_dumps.fa", "cat_counts_dumps.fa", "chicken_counts_dumps.fa", "chimp_counts_dumps.fa", "clouded_leopard_counts_dumps.fa", "colobus_monkey_counts_dumps.fa", "cow_counts_dumps.fa", "dog_counts_dumps.fa", "dusky_titi_counts_dumps.fa","elephant_counts_dumps.fa", "ferret_counts_dumps.fa", "galago_counts_dumps.fa", "gibbon_counts_dumps.fa", "gorilla_counts_dumps.fa", "guinea_pig_counts_dumps.fa", "heagehog_counts_dumps.fa","horse_counts_dumps.fa","human_counts_dumps.fa", "orangatun_counts_dumps.fa"};
//vector<string> file2Name = {"armadillo.fa", "baboon.fa", "cat.fa", "chicken.fa", "chimp.fa", "clouded_leopard.fa", "colobus_monkey.fa", "cow.fa", "dog.fa", "dusky_titi.fa","elephant.fa", "ferret.fa", "galago.fa", "gibbon.fa", "gorilla.fa", "guinea_pig.fa", "heagehog.fa","horse.fa","human.fa", "orangatun.fa"};
//vector<int> sequencCount = {4938920, 5082025, 4746218, 4519823, 4616057, 4578219, 5386352, 5231428, 4369232, 4686137, 4979619, 4965553, 5209548, 5528445, 4607202, 4599354, 4574284, 4643538, 4700560, 5132068, 4641652, 5032268, 5498450, 4887515, 5068389, 4825265, 5202090, 5065741, 4646332};

/*ecoli */
/*vector<string> speciesName = {"536a", "APEC01", "ATCC8739", "B4Sb227", "B18BS512", "BW2952", "CB9615", "CFT073", "D1Sd197", "DH10B","E24377A", "E234869", "ED1a", "EDL933", "F2a301", "F2a2457T", "F5b8401","HS","IAI1", "IAI39","MG1655","S88", "Sakai","SE11","SMS35", "SSSs046","UMN026","UTI89", "W3110"};
vector<string> file1Name = {"536a_counts_dumps.fa", "APEC01_counts_dumps.fa", "ATCC8739_counts_dumps.fa", "B4Sb227_counts_dumps.fa", "B18BS512_counts_dumps.fa", "BW2952_counts_dumps.fa", "CB9615_counts_dumps.fa", "CFT073_counts_dumps.fa", "D1Sd197_counts_dumps.fa", "DH10B_counts_dumps.fa","E24377A_counts_dumps.fa", "E234869_counts_dumps.fa", "ED1a_counts_dumps.fa", "EDL933_counts_dumps.fa", "F2a301_counts_dumps.fa", "F2a2457T_counts_dumps.fa", "F5b8401_counts_dumps.fa","HS_counts_dumps.fa","IAI1_counts_dumps.fa", "IAI39_counts_dumps.fa","MG1655_counts_dumps.fa","S88_counts_dumps.fa", "Sakai_counts_dumps.fa","SE11_counts_dumps.fa","SMS35_counts_dumps.fa", "SSSs046_counts_dumps.fa","UMN026_counts_dumps.fa","UTI89_counts_dumps.fa", "W3110_counts_dumps.fa"};
vector<int> sequencCount = {4938920, 5082025, 4746218, 4519823, 4616057, 4578219, 5386352, 5231428, 4369232, 4686137, 4979619, 4965553, 5209548, 5528445, 4607202, 4599354, 4574284, 4643538, 4700560, 5132068, 4641652, 5032268, 5498450, 4887515, 5068389, 4825265, 5202090, 5065741, 4646332};*/

/*Fish*/
//vector<string> speciesName = {"NC_009057", "NC_009058", "NC_009059", "NC_009060", "NC_009062", "NC_009063", "NC_009064", "NC_009065", "NC_009066", "NC_009067","NC_009459", "NC_010205", "NC_011168", "NC_011169", "NC_011170", "NC_011171", "NC_011177","NC_011179","NC_012055", "NC_013564","NC_013577","NC_013663", "NC_013750","NC_018814","NC_018815"};
//vector<string> file1Name = {"NC_009057_counts_dumps.fa", "NC_009058_counts_dumps.fa", "NC_009059_counts_dumps.fa", "NC_009060_counts_dumps.fa", "NC_009062_counts_dumps.fa", "NC_009063_counts_dumps.fa", "NC_009064_counts_dumps.fa", "NC_009065_counts_dumps.fa", "NC_009066_counts_dumps.fa", "NC_009067_counts_dumps.fa","NC_009459_counts_dumps.fa", "NC_010205_counts_dumps.fa", "NC_011168_counts_dumps.fa", "NC_011169_counts_dumps.fa", "NC_011170_counts_dumps.fa", "NC_011171_counts_dumps.fa", "NC_011177_counts_dumps.fa","NC_011179_counts_dumps.fa","NC_012055_counts_dumps.fa", "NC_013564_counts_dumps.fa","NC_013577_counts_dumps.fa","NC_013663_counts_dumps.fa", "NC_013750_counts_dumps.fa","NC_018814_counts_dumps.fa","NC_018815_counts_dumps.fa"};;
//vector<int> sequencCount = {16626, 16639, 16603, 16572, 16587, 16598, 16703, 16649, 17045, 16510, 16441, 16793, 16544, 16556, 16543, 16976, 16486, 16457, 16508, 16657, 16798, 16627, 16628, 16588, 16590};

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
//vector<string> speciesName = { "baboon", "chimp",  "colobus_monkey",  "dusky_titi",  "gibbon", "gorilla",  "human",  "macaque",   "orangutan", "owl_monkey",  "vervet"};
//vector<string> file1Name = { "baboon_counts_dumps.fa", "chimp_counts_dumps.fa", "colobus_monkey_counts_dumps.fa",  "dusky_titi_counts_dumps.fa",  "gibbon_counts_dumps.fa", "gorilla_counts_dumps.fa", "human_counts_dumps.fa",  "macaque_counts_dumps.fa",   "orangutan_counts_dumps.fa", "owl_monkey_counts_dumps.fa",  "vervet_counts_dumps.fa"};
//vector<int> sequencCount = {1730495 , 1623548, 2023939, 2013679,  2204624, 1815481,  1877426, 1678549,  1581211, 2059585, 1659736};

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
//vector<string> speciesName = {"Baboon", "Common_ch", "Gibbon", "Gorrila", "Human", "Orangutan", "Pigmy_ch"};
//vector<string> file1Name = {"Baboon_counts_dumps.fa", "Common_ch_counts_dumps.fa", "Gibbon_counts_dumps.fa", "Gorrila_counts_dumps.fa", "Human_counts_dumps.fa", "Orangutan_counts_dumps.fa", "Pigmy_ch_counts_dumps.fa"};;
//vector<int> sequencCount = {16757, 16800, 16708, 16598, 16806, 16624, 16791};

//ChunkMiss
vector<string> speciesName = {"chimp", "gorrila", "human"};
vector<string> file1Name = {"chimp_counts_dumps.fa", "gorrila_counts_dumps.fa", "human_counts_dumps.fa"};
vector<int> sequencCount = {1648526, 1843478, 1906376};

/*8Yersina*/
/*vector<string> speciesName = {"AAKT020000", "BX936398", "NC_003143", "NC_004088", "NC_005810", "NC_008149", "NC_008150", "NC_009381"};
vector<string> file1Name = {"AAKT020000_counts_dumps.fa", "BX936398_counts_dumps.fa", "NC_003143_counts_dumps.fa", "NC_004088_counts_dumps.fa", "NC_005810_counts_dumps.fa", "NC_008149_counts_dumps.fa", "NC_008150_counts_dumps.fa", "NC_009381_counts_dumps.fa"};
vector<int> sequencCount = {4723304, 4517345, 4653728, 4600755, 4595065, 4534590, 4702289, 4517345};*/

void printMatrix(vector<Species> species, double **distanceMatrixFactorcount);
void printKmersWithouMissing(vector<Species> secies);
int main() {
    ofstream myfile ("oneToOneMiss_11_8_0.txt");
    int miniKmer = 10; // change one small kmer that use for not fully matched kemer
    int bigKmer = 16; // K mer that used to build tree
    vector<Species> speciesOfKmerSmall;
    freopen ("3MammalsoutAllChunkMiss16_10_3_d_06 _12.txt","w",stdout);
    for (int i = 0; i < speciesName.size() ; i++) {
        Species s(speciesName[i], miniKmer);
        s.init("D:/Ruby/Thesis/Data/3mamals/Data" + std::to_string(miniKmer) + "/" + file1Name[i], sequencCount[i],
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
        s.init("D:/Ruby/Thesis/Data/3mamals/Data" + std::to_string(bigKmer) + "/" + file1Name[i], sequencCount[i], true);
        speciesOfLargeKmer.push_back(s);
    }

    for(int i = 0; i < speciesOfLargeKmer.size() ; i++) {
        speciesOfLargeKmer[i].findMissingChunk(speciesOfLargeKmer, speciesOfKmerSmall, myfile);
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

    //printMatrix(species, distanceMatrixMahalnobis);
    //Construct tree and find distance FactorCount
    delete[] distanceMatrixFactorcount;
    printKmersWithouMissing(speciesOfLargeKmer);

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