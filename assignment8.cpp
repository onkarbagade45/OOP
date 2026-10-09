#include<iostream>
#include<string>
using namespace std;
class Person
{
    public:
    string Name;
    int Age;
    Person(string n,int a)
    {
        Name=n;
        Age=a;
    }
    void displayPerson()
    {
        cout<<"Name="<<Name<<endl;
        cout<<"Age="<<Age<<endl;
    }
};
class Employee : public Person
{
    public:
    int EmpId;
    float Salary;
    Employee(string n,int a,int id,float s) : Person(n,a)
    {
        EmpId=id;
        Salary=s;
    }
    void displayEmployee()
    {
        displayPerson();
        cout<<"EmpId="<<EmpId<<endl;
        cout<<"Salary="<<Salary<<endl;
    }
};
class Manager : public Employee
{
    public:
    string Department;
    int TeamSize;
    Manager(string n,int a,int id,float s,string d,int t) : Employee(n,a,id,s)
    {
        Department=d;
        TeamSize=t;
    }
    void display()
    {
        cout<<"------Manager Details------"<<endl;
        displayEmployee();
        cout<<"Department="<<Department<<endl;
        cout<<"TeamSize="<<TeamSize<<endl;
    }
};
int main()
{
    Manager m1("Ravi_Sharma",40,501,85000,"HR",12);
    m1.display();
    return 0;
}