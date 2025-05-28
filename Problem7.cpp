/*Write a C++ program to create a class called Rectangle that has private member variables for
length and width. Implement member functions to calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class Rectangle
{
    float length, width, area, perimeter;

public:
    void input()
    {
        cout<< "Input length: ";
        cin>>length;
        cout<< "Input width: ";
        cin>>width;
    }

     void calculate()
     {
         area = length* width;
         perimeter =2*(length+ width);
     }
     void output()
     {
         cout<< "Rectangle Area\t:"<<area<<endl<< "Rectangle Perimeter\t:"<<perimeter;
     }

};
int main()
{
    Rectangle r1;
    r1.input();
    r1.calculate();
    r1.output();

}

