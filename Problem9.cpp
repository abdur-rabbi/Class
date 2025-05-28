/*Write a C++ program to create a class called Car that has private member variables for company,
model, and year. Implement member functions to get and set these variables*/

#include<iostream>
using namespace std;

class car
{
    char company[100];
    int model,year;
public:

    void input()
    {
        //cin.ignore();
        cout<< "Input company name: ";
        cin.getline(company, 100);
        cout<< "Input Car model: ";
        cin>>model;
        cout<< "Input year: ";
        cin>>year;
    }

    void output()
    {
        cout<< "Company NAME\t:"<<company<<endl<< "Car model\t:"<<model<<endl<<"Year\t\t:"<<year<<endl;
    }
};
int main()
{
    car c1;
    c1.input();
    c1.output();

}
