#ifndef VOLUNTEER_H
#define VOLUNTEER_H
#include "Staff_Member.h"
using namespace std;

class Volunteer : public Staff_Member
{
public:
    Volunteer(int x = 0, string n = " ", string p = " ", string e = " ", int depId = 0);
    void print() override;
    double pay() const override;
};
#endif