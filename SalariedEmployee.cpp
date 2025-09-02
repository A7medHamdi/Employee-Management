#include "SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(int x, string n, string p, string e, string sn, double salary, int depId)
    : Employee(x, n, p, e, sn, depId), salary(salary) {}

double SalariedEmployee::pay()
{
    return salary;
}

void SalariedEmployee::print()
{
    cout << "\t\t Salaried Employee \n";
    Employee::print();
    cout << "Salary: " << salary << endl;
}