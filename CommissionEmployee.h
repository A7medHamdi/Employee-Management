#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"
#include <iostream>
#include <string>

class CommissionEmployee : public Employee
{
public:
    double target;
    CommissionEmployee(int x = 0, string n = " ", string p = " ", string e = " ", string sn = " ", double target = 0.0, int depId = 0);

    void addSales(double amount);
    double pay() override;
    void print() override;

private:
    double sales;
};
#endif