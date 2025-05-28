/*Write a C++ program to implement a class called Student that has private member variables for
name, class, roll number, and marks. Include member functions to calculate the grade based on the
marks and display the student's information.*/

#include<iostream>
using namespace std;

class student
{
    char name[100];
    int clas,roll,mark;

public:

    void input()
    {
        cout<< "Student name: ";
        cin.getline(name, 100);
        cout<< "Student class: ";
        cin>>clas;
        cout<< "Student roll: ";
        cin>>roll;
        cout<< "Student mark: ";
        cin>>mark;

    }

    char gradeAnalysis()
    {
        if(mark>=80)
            cout<< "A+";
        else if(mark>=70)
            cout<< "A";
        else if(mark>=60)
            cout<< "A-";
        else if(mark>=50)
            cout<< "B";
        else if(mark>=40)
            cout<< "B-";
        else if(mark>=34)
            cout<< "C";
        else
            cout<< "F";
    }

    void output()
    {
        cout<< "Student name\t:"<<name<<endl<<"Student class\t:"<<clas<<endl<<"Student roll\t:"<<roll<<endl<< "Obtain Mark\t:"<<mark<<endl<<"Grade\t\t:"<<gradeAnalysis()<<endl ;
    }

};

int main()
{
    student s1;
    s1.input();
    //s1.gradeAnalysis();
    s1.output();
}


