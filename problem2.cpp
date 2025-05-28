                        /*input student information and input three subject mark using constructor, then calculate avarage mark*/

#include <iostream>
using namespace std;
class student
{
private:
    string name, dept;
    int id, c, m, e;
    float gpa, average;

public:
    void input()
    { 
        cin.ignore();
        cout << "Input name: ";
        getline(cin, name);
        cout << "Input id: ";
        cin >> id;
        cin.ignore();
        cout << "Input Depertment name: ";
        getline(cin, dept);
    }
    void inputMarks(int a, int b, int f)
    {
        c = a, m = b, e = f;
    }
    void output()
    {
        cout << "NAME\t\t:" << name << "\nID\t\t:" << id << "\nDepertment\t:" << dept
             << "\nCSE\t\t:" << c << "\nMath\t\t:" << m << "\nEEE\t\t:" << e << endl;
    }
    void calculateAvarace()
    {
        average = (c + m + e) / 3.0f;
    }
    void display()
    {
        cout << "Obtain avarage mark: " << average << endl;
    }
};
int main()
{
    int i, x;
    cout << "Input a random number: ";
    cin >> x;
    student s[x] ;
    for (i = 0; i < x; i++)
    {
        cout << "Input student information for: " << i + 1 << endl;
        s[i].input();
        int c, m, e;
        cout << "Input mark for CSE: ";
        cin >> c;
        cout << "Input mark for Math: ";
        cin >> m;
        cout << "Input mark for EEE: ";
        cin >> e;
        cout << endl;
        s[i].inputMarks(c, m, e);
        s[i].calculateAvarace();
        cout << "--------------------------" << endl;
    }
    cout << "..................Student Detaisl.................." << endl;
    for (i = 0; i < x; i++)
    {
        cout << endl;
        s[i].output();
        s[i].display();
        cout << "-------------------------------" << endl;
    }
}