#ifndef HOUREMPLOYEE_H
#define HOUREMPLOYEE_H
#include <iostream>
#include "Employee.h"
#include <iostream>
#include <string>

class HourEmployee : public Employee
{
private:
    double hourworked;
    double rate;

public:
    HourEmployee(int x = 0, std::string n = " ", std::string p = " ", std::string e = " ", std::string sn = " ", double rate = 0.0, int depId = 0);

    void addHours(int h);
    double pay() override;
    void print() override;
};
#endif