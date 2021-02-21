#ifndef GRAPH
#define GRAPH
#include <vector>
#include <algorithm>
#include "../include/TouristicPoint.hpp"
#include "../include/Stretch.hpp"
using namespace std;
typedef pair<int, int> pairOfInt;

class Graph
{
private:
    int edgesNumber, minimumSpanningTreeWeigth, minimumSpanningTreeAtractivity;
    vector<int> touristicPointsNumberList;
    vector<TouristicPoint> edges;
    vector<Stretch> bikeStretch;
    vector<Stretch> minimmumSpanningTree;

public:
    int getMinimmunSpanningTreeWeigth();
    int getMinimmunSpanningTreeAtractivity();
    Graph(vector<TouristicPoint> touristicPointsList);
    void addStretch(int weigth, TouristicPoint origin, TouristicPoint destination);
    void generateMinimmumSpanningTree();
    vector<Stretch> getMinimmumSpanningTreeStretches();
    vector<int> getTouristicPointsNumberList();
    ~Graph();
};
#endif