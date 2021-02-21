#ifndef TOURISTIC_POINT
#define TOURISTIC_POINT
using namespace std;
class TouristicPoint
{
private:
    int interestPointNumber;
    int touristicValue;

public:
    void setTouristicValue(int touristicValue);
    int getTouristicValue();
    void setInterestPointNumber(int interestPointNumber);
    int getInterestPointNumber();
    TouristicPoint();
    TouristicPoint(int interestPointNumber, int touristicValue);
    ~TouristicPoint();
};
#endif