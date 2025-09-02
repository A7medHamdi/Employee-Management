#include "ExecutiveEmployee.h"
using namespace std;

ExecutiveEmployee::ExecutiveEmployee(int x, string n, string p, string e, string sn, double salary, double bonus, int depId)
    : SalariedEmployee(x, n, p, e, sn, salary, depId), bonus(bonus) {}

void ExecutiveEmployee::addBonus(double m)
{
    bonus += m;
}

double ExecutiveEmployee::pay()
{
    return SalariedEmployee::pay() + bonus;
}

void ExecutiveEmployee::print()
{
    cout << "\t\t Executive Employee \n";
    SalariedEmployee::print();
    cout << "Bonus: " << bonus << endl;
    cout << "Total Pay: " << pay() << endl;
}