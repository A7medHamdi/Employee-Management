#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(int x, string n, string p, string e, string sn, double target, int depId)
    : Employee(x, n, p, e, sn, depId), target(target), sales(0) {}

void CommissionEmployee::addSales(double amount)
{
    sales += amount;
}

double CommissionEmployee::pay()
{
    if (sales >= target)
        return sales * 0.05;
    return 0.0;
}

void CommissionEmployee::print()
{
    cout << "\t\t Commission Employee \n";
    Employee::print();
    cout << "Target: " << target << endl;
    cout << "Sales: " << sales << endl;
    cout << "Pay: " << pay() << endl;
}