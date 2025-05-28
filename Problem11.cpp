/*Write a C++ program to create a class called Triangle that has private member variables
for the length of its three sides. Implement functions to determine if the triangle is equilateral,isosceles, or scalene.*/

#include<iostream>
using namespace std;
class Triangle
{
    float x,y,z;

public:
    void input()
    {
        cout<< "Input 1st side length: ";
        cin>>x;
        cout<< "Input 2nd side length: ";
        cin>>y;
        cout<< "Input 3rd side length: ";
        cin>>z;

        if(x==y && y==z)
        {
            cout<< "The Triangle is Equilateral.";
        }
        else if(x==y || y==z || z==x)
        {

             cout<< "The Triangle is Isosceles.";
        }
        else
        {
             cout<< "The Triangle is Scalene.";
        }
    }

};

int main()
{
    Triangle t1;
    t1.input();
}

