                               /*difine circle area and color using constructor*/

#include <iostream>
#define PI 3.1416
using namespace std;
class circle
{
private:
    string cName;
    float re, area;

public:
    circle(string c, float r)
    {
        cName = c, re = r;
        area = PI * re * re;
    }
    void output()
    {
        cout << "Circle area= " << area << "\nCircle colour= " << cName << endl;
    }
};
int main()
{
    string c;
    float r;
    cout << "Input colour: ";
    getline(cin, c);
    cout << "Input redius: ";
    cin >> r;
    circle e(c, r);
    e.output();

}