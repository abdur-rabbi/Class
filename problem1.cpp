                         /*input student information and three subject mark, then calculate avarage mark*/

#include <iostream>
using namespace std;
class student
{
private:
    string name;
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
        cout << "Input gpa: ";
        cin >> gpa;
        cout << "Input mark for CSE: ";
        cin >> c;
        cout << "Input mark for Math: ";
        cin >> m;
        cout << "Input mark for EEE: ";
        cin >> e;
        cout << endl;

    }
    void output()
    {
        cout << "NAME\t:" << name << "\nID\t:" << id << "\nGPA\t:" << gpa
             << "\nCSE\t:" << c << "\nMath\t:" << m << "\nEEE\t:" << e << endl;
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
    student s[x] = {student()};
    for (i = 0; i < x; i++)
    {
        cout << "Input student information for: " << i + 1 << endl;
        s[i].input();
        s[i].calculateAvarace();
        cout << "--------------------------" << endl;
    }
    cout << "..................Student Detaisl.................." << endl;
    for (i = 0; i < x; i++)
    {
        cout<<endl;
        s[i].output();
        s[i].display();
        cout << "-------------------------------" << endl;
    }
}