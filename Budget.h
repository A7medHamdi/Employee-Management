#ifndef BUDGET_H
#define BUDGET_H
#include <iostream>
using namespace std;

class Budget
{
public:
    int id;
    double value;
    Budget(int id = 0, double value = 0.0);
    void increaseBudget(double amount);
    void print();
};
#endif