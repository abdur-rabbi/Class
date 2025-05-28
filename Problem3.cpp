/*Write a C++ program to implement a class called Circle that has private member variables for
radius. Include member functions to calculate the circle's area and circumference.*/

#include<iostream>
#define PI 3.1416
using namespace std;

class Circle
{
    float redius,area,circumference;

    public:
    void input()
    {
        cout<< "Input radius: ";
        cin>>redius;
    }
    void calculate()
    {
        area= PI*redius*redius;
        circumference=2*PI*redius;
    }
    void output()
    {
        cout<<"AREA\t\t:"<<area<<endl<< "CIRCUMFERENCE\t:"<<circumference;
    }

};

int main()
{
    Circle c1;
    c1.input();
    c1.calculate();
    c1.output();

}


