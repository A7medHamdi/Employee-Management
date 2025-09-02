#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Staff_Member.h"
using namespace std;

class Employee : public Staff_Member
{
protected:
    string socialSecurityNumber;

public:
    Employee(int x = 0, string n = " ", string p = " ", string e = " ", string sn = " ", int depId = 0);

    string getSN();
    void print() override;
    virtual double pay();
};
#endif