#include <iostream>
using namespace std;
class student
{
    string name;
    int age;
    float grade;

public:
    student() {}
    void input(string n, int a, float g)
    {
        name = n, age = a, grade = g;
    }
    student(string n, int a, float g)
    {
        name = n, age = a, grade = g;
    }
    void output()
    {
        cout << "Name\t:" << name << "\nAge\t:" << age << "\nGrade\t:" << grade << endl;
    }
};
int main()
{
    cout << "Input student number:";
    int x, i;
    cin >> x;
    student s[x];
    for (i = 0; i < x; i++)
    {
        string n;
        int a;
        float g;
        cout << "\ninput name:";
        cin >> n;
        cout << "input age:";
        cin >> a;
        cout << "input grade:";
        cin >> g;
        s[i].input(n, a, g);
    }
    cout << endl;
    cout << "....................Student Details........................." << endl;
    for (i = 0; i < x; i++)
    {
        s[i].output();
        cout << endl;
    }
}
