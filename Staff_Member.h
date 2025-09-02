#ifndef STAFF_MEMBER_H
#define STAFF_MEMBER_H
#include <iostream>
#include <string>
using namespace std;

class Staff_Member
{
protected:
    int employeeID;
    string name;
    string phone;
    string email;
    int departmentId;

public:
    Staff_Member(int x = 0, string n = " ", string p = " ", string e = " ", int depId = 0);

    void setemployeeID(int x);
    int getEmployeeID();

    void setname(string n);
    void setphone(string p);
    void setemail(string e);
    void setDepartmentId(int depId);

    int getDepartmentId();

    virtual void print();
    virtual double pay() const;
};
#endif