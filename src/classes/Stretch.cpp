#include "../include/Stretch.hpp"
using namespace std;

Stretch::Stretch(int weigth, TouristicPoint origin, TouristicPoint destination)
{
    this->weigth = weigth;
    this->origin = origin;
    this->destination = destination;
    this->atractivity = this->getAtractivity();
}

int Stretch::getAtractivity()
{
    return origin.getTouristicValue() + destination.getTouristicValue();
}

int Stretch::getWeigth()
{
    return this->weigth;
}

TouristicPoint Stretch::getOrigin()
{
    return this->origin;
}

TouristicPoint Stretch::getDestination()
{
    return this->destination;
}

Stretch::~Stretch() {}