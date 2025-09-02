#include "Project.h"
using namespace std;

Project::Project(int id, string location, double cost, Employee *manager)
    : project_id(id), location(location), manager(manager), currentcost(cost) {}

void Project::addBudget(Budget b) { budgets.push_back(b); }

void Project::increaseBudget(int bid, double addVal)
{
    for (auto &b : budgets)
    {
        if (b.id == bid)
        {
            b.increaseBudget(addVal);
            return;
        }
    }
    cout << "Budget not found with ID " << bid << endl;
}
double Project::calculateTotalBudget()
{
    double total = 0;
    for (auto &b : budgets)
    {
        total += b.value;
    }
    return total;
}

void Project::print()
{
    cout << "Project ID = " << project_id << endl;
    cout << "Location =" << location << endl;
    cout << "CurrentCost =" << currentcost << endl;

    if (manager)
    {
        cout << "Manager: ";
        manager->print();
    }
    else
    {
        cout << "Manager: None" << endl;
    }

    cout << "Budgets:" << endl;
    for (auto &b : budgets)
    {
        b.print();
    }
}