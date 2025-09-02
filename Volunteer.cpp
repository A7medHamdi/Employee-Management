#include "Volunteer.h"
#include <iostream>
using namespace std;

Volunteer::Volunteer(int x, string n, string p, string e, int depId)
    : Staff_Member(x, n, p, e, depId) {}

double Volunteer::pay() const { return 0.0; }

void Volunteer::print()
{
    cout << "\t\t Volunteer \n";
    Staff_Member::print();
    cout << "Pay: " << pay() << endl;
}
