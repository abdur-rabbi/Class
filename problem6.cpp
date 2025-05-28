                        /*input car information and check vintage using constructor*/

#include <iostream>
using namespace std;
class car
{
private:
    string co;
    int mod, year;

public:
    car(string c, int m, int y)
    {
        co = c, mod = m, year = y;
    }
    void output()
    {
        cout << "Color\t: " << co << "\nModel\t:" << mod << "\nYear\t:" << year << endl;
    }
    void checkVantage()
    {
        if (year >= 25)
        {
            cout << "It's a vantage car." << endl;
        }
        else
        {
            cout << "It's not a vantage car." << endl;
        }
    }
};
int main()
{
    string c;
    int m, y;
    cout << "Input color: ";
    getline(cin, c);
    cout << "Input model: ";
    cin >> m;
    cout << "Input year: ";
    cin >> y;
    car ob(c, m, y);
    ob.output();
    ob.checkVantage();
}