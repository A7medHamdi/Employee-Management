#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <string>
using namespace std;

class Department
{
private:
    int id;
    string name;

public:
    Department(int id = 0, string name = "");
    int getId();
    string getName();
    void setId(int id);
    void setName(string name);
    void print();
};
#endif