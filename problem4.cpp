                                    /*find largest number using constructor*/

#include <iostream>
using namespace std;
class findl
{
protected:
    int x, y;

public:
    findl(int a, int b)
    {
        x = a, y = b;
        if (x >= y)
        {
            cout << x << " is the largest number.";
        }
        else
        {
            cout << y << " is the largest number.";
        }
    }
};
int main()
{
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    findl (a, b);
}