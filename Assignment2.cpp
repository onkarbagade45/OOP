#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int studentID;
    int year;
    string branch;
    string studentName;

    void input()
    {
        cout << "Enter studentID: ";
        cin >> studentID;

        cout << "year: ";
        cin >> year;

        cout << "branch: ";
        cin >> branch;

        cout << "studentName: ";
        cin >> studentName;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "student ID: " << studentID << endl;
        cout << "year: " << year << endl;
        cout << "branch: " << branch << endl;
        cout << "studentName: " << studentName << endl;
    }
};

int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}
