/*Write a C++ program to create a class called Person that has private member variables for name,
age and country. Implement member functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;

class person
{
    char name[100], country[100];
    int age;
public:

    void input()
    {
        //cin.ignore();
        cout<< "Input Person name: ";
        cin.getline(name, 100);
        cout<< "Input Country name: ";
        cin.getline(country, 100);
        cout<< "Input age: ";
        cin>>age;
    }

    void output()
    {
        cout<< "NAME\t\t:"<<name<<endl<< "Country name\t:"<<country<<endl<<"AGE\t\t:"<<age<<endl;
    }
};
int main()
{
    person p1;
    p1.input();
    p1.output();

}
