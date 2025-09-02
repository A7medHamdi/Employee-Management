#include <iostream>
#include <vector>
#include "Department.h"
#include "Staff.h"
#include "Volunteer.h"
#include "HourEmployee.h"
#include "SalariedEmployee.h"
#include "ExecutiveEmployee.h"
#include "CommissionEmployee.h"
#include "Project.h"
#include "Budget.h"
#include <cstdlib>
using namespace std;

int main()
{
    vector<Department> departments;
    Staff staff;
    vector<Project> projects;

    int choice;
    do
    {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Add Department\n";
        cout << "2. Add Staff Member\n";
        cout << "3. Show All Staff\n";
        cout << "4. Calculate Payroll\n";
        cout << "5. Delete Staff Member\n";
        cout << "6. Add Project\n";
        cout << "7. Show Projects\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name;
            cout << "Enter Department ID and Name:\n";
            cin >> id >> name;
            departments.push_back(Department(id, name));
        }
        else if (choice == 2)
        {
            cout << "Choose Staff type:\n";
            cout << "1. Volunteer\n";
            cout << "2. Hourly\n";
            cout << "3. Salaried\n";
            cout << "4. Executive\n";
            cout << "5. Commission\n";
            int type;
            cin >> type;

            Staff_Member *m = nullptr;

            if (type == 1)
            {
                int id;
                string name, phone, email;
                cout << "Enter ID, Name, Phone, Email:\n";
                cin >> id >> name >> phone >> email;
                m = new Volunteer(id, name, phone, email);
            }
            else if (type == 2)
            {
                int id;
                string name, phone, email, sn;
                double rate;
                cout << "Enter ID, Name, Phone, Email, SSN, Rate:\n";
                cin >> id >> name >> phone >> email >> sn >> rate;
                auto h = new HourEmployee(id, name, phone, email, sn, rate);

                int hrs;
                cout << "Enter worked hours: ";
                cin >> hrs;
                h->addHours(hrs);

                m = h;
            }
            else if (type == 3)
            {
                int id;
                string name, phone, email, sn;
                double salary;
                cout << "Enter ID, Name, Phone, Email, SSN, Salary:\n";
                cin >> id >> name >> phone >> email >> sn >> salary;
                m = new SalariedEmployee(id, name, phone, email, sn, salary);
            }
            else if (type == 4)
            {
                int id;
                string name, phone, email, sn;
                double salary, bonus;
                cout << "Enter ID, Name, Phone, Email, SSN, Salary, Bonus:\n";
                cin >> id >> name >> phone >> email >> sn >> salary >> bonus;
                m = new ExecutiveEmployee(id, name, phone, email, sn, salary, bonus);
            }
            else if (type == 5)
            {
                int id;
                string name, phone, email, sn;
                double target;
                cout << "Enter ID, Name, Phone, Email, SSN, Target:\n";
                cin >> id >> name >> phone >> email >> sn >> target;
                auto c = new CommissionEmployee(id, name, phone, email, sn, target);

                double sales;
                cout << "Enter sales amount: ";
                cin >> sales;
                c->addSales(sales);

                m = c;
            }

            if (m != nullptr)
            {
                staff.addmember(m);
            }
        }
        else if (choice == 3)
        {
            staff.showAll();
        }
        else if (choice == 4)
        {
            staff.calcPayroll();
        }
        else if (choice == 5)
        {
            int id;
            cout << "Enter ID to delete:\n";
            cin >> id;
            if (staff.deletmember(id))
                cout << "Deleted successfully.\n";
            else
                cout << "Not found.\n";
        }
        else if (choice == 6)
        {
            int id;
            string location;
            double cost;
            cout << "Enter Project ID, Location, Cost:\n";
            cin >> id >> location >> cost;
            Project p(id, location, cost, nullptr);

            int n;
            cout << "How many budgets to add?\n";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                int b_id;
                double value;
                cout << "Enter Budget ID (int) and Value (double):\n";
                cin >> b_id >> value;
                p.addBudget(Budget(b_id, value));
            }
            projects.push_back(p);
        }
        else if (choice == 7)
        {
            for (auto &p : projects)
            {
                p.print();
                cout << "Total Budget: " << p.calculateTotalBudget() << endl;
            }
        }

    } while (choice != 0);

    return 0;
}
