#include "../include/Graph.hpp"
#include "../include/DisjointSets.hpp"
using namespace std;

Graph::Graph(vector<TouristicPoint> touristicPointsList)
{
    minimumSpanningTreeAtractivity = 0;
    minimumSpanningTreeWeigth = 0;
    this->edges = touristicPointsList;
    this->edgesNumber = edges.size();
    this->touristicPointsNumberList = vector<int>(edgesNumber);
}

vector<Stretch> Graph::getMinimmumSpanningTreeStretches()
{
    return this->minimmumSpanningTree;
}

vector<int> Graph::getTouristicPointsNumberList()
{
    return this->touristicPointsNumberList;
}

int Graph::getMinimmunSpanningTreeWeigth()
{
    return this->minimumSpanningTreeWeigth;
}

int Graph::getMinimmunSpanningTreeAtractivity()
{
    return this->minimumSpanningTreeAtractivity;
}

void Graph::addStretch(int weigth, TouristicPoint origin, TouristicPoint destination)
{
    bikeStretch.push_back(Stretch(weigth, origin, destination));
}

void Graph::generateMinimmumSpanningTree()
{
    sort(bikeStretch.begin(), bikeStretch.end());
    DisjointSets disjointSets = DisjointSets(edgesNumber);
    for (auto it = bikeStretch.begin(); it != bikeStretch.end(); it++)
    {
        int originSet = disjointSets.findParent(it->getOrigin().getInterestPointNumber());
        int destinationSet = disjointSets.findParent(it->getDestination().getInterestPointNumber());
        if (originSet != destinationSet)
        {
            minimmumSpanningTree.push_back(*it);
            minimumSpanningTreeWeigth += it->getWeigth();
            minimumSpanningTreeAtractivity += it->getAtractivity();
            touristicPointsNumberList.at(it->getOrigin().getInterestPointNumber())++;
            touristicPointsNumberList.at(it->getDestination().getInterestPointNumber())++;
            disjointSets.mergeByRank(originSet, destinationSet);
        }
    }
}

Graph::~Graph() {}