#include "HourEmployee.h"
using namespace std;

HourEmployee::HourEmployee(int x, string n, string p, string e, string sn, double rate, int depId)
    : Employee(x, n, p, e, sn, depId), hourworked(0), rate(rate) {}

void HourEmployee::addHours(int h) { hourworked += h; }

double HourEmployee::pay()
{
    return hourworked * rate;
}

void HourEmployee::print()
{
    cout << "\t\t Hourly Employee \n";
    Employee::print();
    cout << "Rate: " << rate << endl;
    cout << "Hours: " << hourworked << endl;
    cout << "Pay: " << pay() << endl;
}