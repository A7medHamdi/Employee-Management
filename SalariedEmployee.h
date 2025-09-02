#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"
#include <iostream>
#include <string>

class SalariedEmployee : public Employee
{
protected:
    double salary;

public:
    SalariedEmployee(int x = 0, string n = " ", string p = " ", string e = " ", string sn = " ", double salary = 0.0, int depId = 0);

    double pay() override;
    void print() override;
};
#endif