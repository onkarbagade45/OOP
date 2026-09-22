#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int employeeID;
    string name;
    string department;
    float salary;

    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.input();
    e1.display();

    return 0;
}
