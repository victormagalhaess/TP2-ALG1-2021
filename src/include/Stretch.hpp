#ifndef STRETCH
#define STRETCH
#include "TouristicPoint.hpp"
using namespace std;
class Stretch
{
private:
    int weigth;
    int atractivity;
    TouristicPoint origin;
    TouristicPoint destination;

public:
    Stretch(int weigth, TouristicPoint origin, TouristicPoint destination);
    int getAtractivity();
    int getWeigth();
    TouristicPoint getOrigin();
    TouristicPoint getDestination();
    bool operator<(const Stretch &other) //This is an example on how overload a comparison operator
    {
        return (weigth < other.weigth) || ((weigth == other.weigth) && atractivity > other.atractivity);
    }
    ~Stretch();
};

#endif