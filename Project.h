#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
#include <vector>
#include <string>
#include "Employee.h"
#include "Budget.h"
using namespace std;

class Project
{
private:
   int project_id;
   string location;
   Employee *manager;
   double currentcost;
   vector<Budget> budgets;

public:
   Project(int id = 0, string location = "", double cost = 0.0, Employee *manager = nullptr);
   void addBudget(Budget b);
   void increaseBudget(int bid, double addVal);
   int getId() { return project_id; };
   double calculateTotalBudget();
   void print();
};
#endif