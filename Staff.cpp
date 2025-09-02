#include <iostream>
#include <vector>
#include "Staff.h"
using namespace std;
Staff::~Staff()
{
    for (auto m : members)
    {
        delete m;
    }
}
void Staff::addmember(Staff_Member *member)
{
    members.push_back(member);
}
bool Staff::deletmember(int id)
{
    for (auto it = members.begin(); it != members.end(); ++it)
    {
        if ((*it)->getEmployeeID() == id)
        {
            delete *it;
            members.erase(it);
            return true;
        }
    }
    return false;
}
void Staff::showAll() const
{
    if (members.empty())
    {
        cout << "No staff members found.\n";
        return;
    }
    cout << "\t Staff Members List \n";
    for (auto m : members)
    {
        if (m != nullptr)
        {
            m->print();
        }
    }
}
double Staff::calcPayroll() const
{
    if (members.empty())
    {
        cout << "No staff members found.\n";
        return 0.0;
    }
    double total = 0.0;
    for (auto m : members)
    {
        if (m != nullptr)
        {
            total += m->pay();
        }
    }
    cout << "Total Payroll: " << total << endl;
    return total;
}
