#include "Staff_Member.h"
#include <iostream>
using namespace std;

Staff_Member::Staff_Member(int x, string n, string p, string e, int depId)
    : employeeID(x), name(n), phone(p), email(e), departmentId(depId) {}

void Staff_Member::setemployeeID(int x) { employeeID = x; }
int Staff_Member::getEmployeeID() { return employeeID; }

void Staff_Member::setname(string n) { name = n; }
void Staff_Member::setphone(string p) { phone = p; }
void Staff_Member::setemail(string e) { email = e; }
void Staff_Member::setDepartmentId(int depId) { departmentId = depId; }

int Staff_Member::getDepartmentId() { return departmentId; }

void Staff_Member::print()
{
    cout << "ID        : " << employeeID << "\n"
         << "Name      : " << name << "\n"
         << "Phone     : " << phone << "\n"
         << "Email     : " << email << "\n"
         << "Department ID: " << departmentId << "\n";
}

double Staff_Member::pay() const
{
    return 0.0;
}
