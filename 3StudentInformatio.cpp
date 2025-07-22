#include<iostream>
#include<cstring>
using namespace std;
class student
{
public:
    char name[100], dep[100], sec[100];
    int id;
    float gpa;
    static int count;  // static variable

public:
    void input()
    {
        cin.ignore();
        cout<<"Student Name:";
        fgets(name, sizeof(name), stdin);

        cout<<"Student Department:";
        fgets(dep, sizeof(dep), stdin);

        cout<<"Student Section:";
        fgets(sec, sizeof(sec), stdin);

        cout<<"Student ID:";
        cin>>id;
        cout<<"Student GPA:";
        cin>>gpa;
        cout<<endl<<endl;


        name[strcspn(name, "\n")]='\0';
        dep[strcspn(dep, "\n")]='\0';
        sec[strcspn(sec, "\n")]='\0';

        count+=1;


    }

    void display()
    {
        cout<<"Name\t\t:"<<name<<endl<<"Department\t:"<<dep<<endl<<"Section\t\t:"<<sec<<endl<<"ID\t\t:"<<id<<endl<<"GPA\t\t:"<<gpa<<endl<<endl;

    }

    static void output();

};

int student :: count; // Scope resulation
void student :: output()
{
    cout<<"Total student\t:"<<count<<endl;
}


int main()
{
    int i, n;
    cout<<"The student numbers are:";
    cin>>n;
    student s[n];
    for(i=0; i<n; i++)
    {
        cout<<"Student:"<<i+1<<endl;
        s[i].input();
    }
    for(i=0; i<n; i++)
    {
        cout<<"Student: "<<i+1<<endl;
        s[i].display();
    }

    student :: output();
}
