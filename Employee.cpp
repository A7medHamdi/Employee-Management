#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int x, string n, string p, string e, string sn, int depId)
    : Staff_Member(x, n, p, e, depId), socialSecurityNumber(sn) {}

void Employee::print()
{
    Staff_Member::print();
    cout << "Social Security Number: " << socialSecurityNumber << endl;
}

string Employee::getSN() { return socialSecurityNumber; }

double Employee::pay() { return 0.0; }
