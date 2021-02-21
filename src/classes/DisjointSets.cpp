#include "../include/DisjointSets.hpp"
using namespace std;

DisjointSets::DisjointSets(int numberOfVertex)
{
    this->numberOfVertex = numberOfVertex;
    parent = new int[numberOfVertex + 1];
    rank = new int[numberOfVertex + 1];
    for (int i = 0; i <= numberOfVertex; i++)
    {
        rank[i] = 0;
        parent[i] = i;
    }
}

DisjointSets::~DisjointSets() {}

int DisjointSets::findParent(int node)
{
    if (node != parent[node])
    {
        parent[node] = findParent(parent[node]);
    }
    return parent[node];
}

void DisjointSets::mergeByRank(int origin, int destination)
{
    origin = findParent(origin);
    destination = findParent(destination);
    if (rank[origin] > rank[destination])
    {
        parent[destination] = origin;
    }
    else
    {
        parent[origin] = destination;
    }
    if (rank[origin] == rank[destination])
    {
        rank[destination]++;
    }
}