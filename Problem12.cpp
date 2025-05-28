/*Write a C++ program to implement a class called Employee that has private member variables for
name, employee ID, and salary. Include member functions to calculate and set salary based on
employee performance.*/

#include<iostream>
using namespace std;

class Employee
{
    char name[100],performe;
    int id;
    float salary, increment=0, totalSalary;

public:
    void input()
    {
        cin.ignore();
        cout<< "Employee name: ";
        cin.getline(name, 100);
        cout<< "Employee id: ";
        cin>>id;
        cout<< "Employee base salary: ";
        cin>>salary;
        cout<< "Employee performance grade(A,B,C,D): ";
        cin>>performe;
    }

    void performance()
    {
        switch(performe)
        {
        case 'A':
            increment=.2;
            break;

        case 'B':
            increment=.15;
            break;

        case 'C':
            increment=.1;
            break;

        case 'D':
            increment=.05;
            break;

        default :
            cout<< "No performance grade here. ";

            return;

        }
    }


    void calculate()
    {
        totalSalary=salary+salary*increment;

    }

    void output()
    {
        cout<< "Employee Name\t:"<<name<<endl<< "Employee ID\t:"<<id<<endl<< "Base Salary\t:"<<salary<<endl<< "Total Salary\t:"<<totalSalary<<endl;
    }

};

int main()
{
    Employee e1;
    e1.input();
    e1.performance();
    e1.calculate();
    e1.output();

}
















