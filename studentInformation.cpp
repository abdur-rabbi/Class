#include <iostream>
using namespace std;
class student
{
private:
    string name, dep, sec, id;
    float gpa;

public:
    student() {}
    student(string n, string d, string s, string i, float g) : name(n), dep(d), sec(s), id(i), gpa(g) {}
    void display()
    {
        cout << "Name\t\t: " << name
             << "\nDepartment\t: " << dep
             << "\nSection\t\t: " << sec
             << "\nID\t\t: " << id
             << "\nGPA\t\t: " << gpa << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    student s[n];

    cout << ".......Enter details for " << n << " students......." << endl;
    for (int i = 0; i < n; ++i)
    {
        string name, dep, sec, id;
        float gpa;
        cout << "Enter details for student " << (i + 1) << endl;
        cout << "Name: ";
        cin >> ws; // to ignore leading whitespace
        getline(cin, name);
        cout << "Department: ";
        getline(cin, dep);
        cout << "Section: ";
        getline(cin, sec);
        cout << "ID: ";
        getline(cin, id);
        cout << "GPA: ";
        cin >> gpa;
        s[i] = student(name, dep, sec, id, gpa);
        cin.ignore();
        cout << endl;
    }

    cout << ".......Displaying student details......." << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Details of student " << (i + 1) << ": " << endl;
        s[i].display();
        cout << endl;
    }
}
