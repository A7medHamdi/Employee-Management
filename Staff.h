#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <vector>
#include "Staff_Member.h"
using namespace std;
class Staff
{
private:
    vector<Staff_Member *> members;

public:
    Staff() = default;
    ~Staff();
    void addmember(Staff_Member *member);
    bool deletmember(int id);
    void showAll() const;
    double calcPayroll() const;
};
#endif