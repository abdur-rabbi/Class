#include<iostream>
using namespace std;
class student
{
    string NAME;
    int ID;
    static int count;
    public:
    student(string )
    student(string N="Abdur", int I=10)
    {
        NAME=N, ID=I,count+=1;
    }
    void output()
    {
        cout<<"NAME\t:"<<NAME<<"ID\t:"<<ID<<endl<<endl;
    }
    static void display();
}
int student::count;
void student::display()
{
    cout<<"totalStudent:"<<count;
}
int main()
{
    student s1("Rabbi"),s2(11),s3("")
}