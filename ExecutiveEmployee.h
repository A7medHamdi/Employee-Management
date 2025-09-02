#ifndef EXECUTIVEEMPLOYEE_H
#define EXECUTIVEEMPLOYEE_H
#include "SalariedEmployee.h"
#include <iostream>
#include <string>

class ExecutiveEmployee : public SalariedEmployee
{
private:
    double bonus;

public:
    ExecutiveEmployee(int x = 0, string n = " ", string p = " ", string e = " ", string sn = " ", double salary = 0.0, double bonus = 0.0, int depId = 0);

    void addBonus(double m);
    double pay() override;
    void print() override;
};
#endif