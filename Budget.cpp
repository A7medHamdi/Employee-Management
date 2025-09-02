#include "Budget.h"
using namespace std;

Budget::Budget(int id, double value) : id(id), value(value) {}
void Budget::increaseBudget(double amount) { value += amount; }
void Budget::print() { cout << "Budget ID=" << id << " Value =" << value << endl; }