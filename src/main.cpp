#include <iostream>
#include "./include/Graph.hpp"
using namespace std;

int main()
{
    int numberOfIPoints, numberOfEdges;
    vector<TouristicPoint> touristicPoints;
    cin >> numberOfIPoints >> numberOfEdges;
    int touristicValues[numberOfIPoints];

    for (int i = 0; i < numberOfIPoints; i++)
    {
        cin >> touristicValues[i];
        touristicPoints.push_back(TouristicPoint(i, touristicValues[i]));
    }

    Graph graph = Graph(touristicPoints);

    for (int i = 0; i < numberOfEdges; i++)
    {
        int weigth, origin, destination;
        cin >> origin >> destination >> weigth;
        graph.addStretch(weigth, touristicPoints[origin], touristicPoints[destination]);
    }

    graph.generateMinimmumSpanningTree();
    cout << graph.getMinimmunSpanningTreeWeigth() << " " << graph.getMinimmunSpanningTreeAtractivity() << endl;
    vector<int> touristiciPointsNumberList = graph.getTouristicPointsNumberList();

    for (int i = 0; i < numberOfIPoints; i++)
    {
        if (!i)
        {
            cout << " ";
        }
        cout << touristiciPointsNumberList.at(i);
    }
    cout << endl;

    vector<Stretch> minimmunSpanningTree = graph.getMinimmumSpanningTreeStretches();
    for (auto it = minimmunSpanningTree.begin(); it != minimmunSpanningTree.end(); it++)
    {
        cout << it->getOrigin().getInterestPointNumber() << " " << it->getDestination().getInterestPointNumber() << " " << it->getWeigth() << endl;
    }
    return 0;
}