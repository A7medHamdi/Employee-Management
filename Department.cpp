#include "Department.h"
using namespace std;

Department::Department(int id, string name) : id(id), name(name) {}
int Department::getId() { return id; }
string Department::getName() { return name; }
void Department::setId(int id) { this->id = id; }
void Department::setName(string name) { this->name = name; }
void Department::print()
{
    cout << "Department [ ID = " << id << ", Name = " << name << " ]" << endl;
}