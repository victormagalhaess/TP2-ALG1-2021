#ifndef DISJOINT_SETS
#define DISJOINT_SETS
#include <iostream>

class DisjointSets
{
private:
    int *parent, *rank;
    int numberOfVertex;

public:
    int findParent(int node);
    void mergeByRank(int origin, int destination);
    DisjointSets(int numberOfVertex);
    ~DisjointSets();
};

#endif