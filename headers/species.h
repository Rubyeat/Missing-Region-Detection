//
// Created by Yusuf on 9/11/2019.
//

#ifndef KMERS_KMERCOUNTS_H
#define KMERS_KMERCOUNTS_H

#endif //KMERS_KMERCOUNTS_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

class Species {
public:
    static map<string, int> totalCount;
    int entropyKmer;
    string name;
    int kmer;
    double averageKmerCounts;
    int sequenceLength;
    map<string, int> kmerCount;
    map<string, double> standardDeviation;
    vector<string> kmers;
    vector<bool> chunkMissing;
    Species(string n, int kmer);
    int init(string fileName, int sCount, bool calculateSd);
    vector<double> calculateDistance(Species s, bool considerChunkMissing);
    static double calculateEntropy(vector<Species> species);
    void calculateStandardDeviation(string subsequence);
    void findMissingChunk(vector<Species> species, vector<Species> checkList, ofstream& myfile);
    void findMissingChunk(vector<Species> species, vector<Species> checkList, int missCount);
    vector<string> subStringKmer(string s,int subStringLen);
    string reverse_complement(string s);

};



