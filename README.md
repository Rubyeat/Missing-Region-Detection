# MissingRegionDetection
To be used in k-mer based alignment free phylogeny estimation methods to filter out k-mers corresponding to missing regions.

Approach:
. Counting K-mers from the genome sequences using Jellyfish(v2.2.4)
. Selection of k-mer from the calculation of maximum entropy
. Calculate the sub-length of k-mer and threshold value
. Detect the missing chunk of genome sequences using our algorithm
. Filter out those missing chunk

Input:
. Files containing the counted k-mers of each species 
. A file named species.txt where the species name and the length of the genome sequences will be given.
. 

Output:
. K-mers after filtering the missing chunk

Dataset:
. The datasets analyzed in this study are publicly available, and the sources have been referenced in the “Datasets” subsection under “Results”.

Language Used:
. C++
