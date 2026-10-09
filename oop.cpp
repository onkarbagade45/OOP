#include <iostream>
#include <string>
using namespace std;

class Person
{
     public:
     string Name;
     int Age;
     person(string n, int a)
     {
      Name=n;
      Age=a;
     }
      void displayperson()
     {
        cout<<"Name="<<Name<<endl;
        cout<<"Age="<<Age<<endl;
     }

};
class Employee:public person
{
    public:
    int EmpId;
    float Salary;
    employee(string n,int a,int id,float s) : Person(n,a)
    {
     EmpID=id;
     Salary=s;
    }
     void displayEmployee()
    {
       displayPerson();
       cout<<"EmpId="<<EmpId<<endl;
       cout<<"Salary="<<Salary<<endl;
    }
};

class  Manager: public Employee
{
   public:
          string Department;
          int TameSize;
          Manager(string n,int a,int id,float s,string d,int t) : Employee(n,a,id,s,d,t)
        {
           Department=d;
           TameSize=t;
        }
         void display()
        {
         cout<<"------ Manager Details-----"<<endl;
         displayEmployee();
         cout<<"Department="<<Department<<endl;
         cout<<"TeamSize="<<TeamSize<<endl;
        }
};
 int main()
 {
  Manager m1("Onkar",40,507,85000,"HR",12);
  m1.display();
  return 0;
 }
