#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeId;
    string employeeName;

public:
    Employee(int id, string name) {
        employeeId = id;
        employeeName = name;
        cout << "Employee record created for " << employeeName << "." << endl;
    }

    void process() {
        cout << "Processing employee record for "
             << employeeName << " (ID: " << employeeId << ")." << endl;
    }

    ~Employee() {
        cout << "Employee record for " << employeeName
             << " removed from memory." << endl;
    }
};

int main() {
    {
        Employee employee(1001, "Alex Morgan");
        employee.process();
    } // The destructor runs automatically here.

    cout << "Processing completed." << endl;
    return 0;
}