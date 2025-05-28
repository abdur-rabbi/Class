/*Write a C++ program to implement a class called Date that has private member variables for day,
month, and year. Include member functions to set and get these variables, as well as to validate if
the date is valid.*/

#include<iostream>
using namespace std;

class Date
{
    int day, month, year;

public:

    void input()

    {

        cout<< "Input Day: ";
        cin>>day;
        cout<< "Input Month: ";
        cin>>month;
        cout<< "Input Year: ";
        cin>>year;

       /* if(day<1 || day>31)
        {
            cout<< "Input day is invalid.";
        }
        else if(month<1 || month>12)
        {
            cout<< "Input month is invalid.";
        }
        else if(year<1)
            cout<< "Input year is invalid.";*/



    }

    void validityCheck()
    {

            if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            {
                if((day<1 && day>31) || (month<1 && month>12) || (year<1))
                {
                    cout<< "The date: "<<day<< "."<<month<<"."<<year<<" does not exist."<<endl;

                }
                else
                {
                    cout<< "The date: "<<day<< "."<<month<<"."<<year<<" exist."<<endl;
                }

            }
            else if(month==4 || month==6 || month==9 || month==11 )
            {
                if((day<1 && day>30) || (month<1 && month>12) || (year<1))
                {
                    cout<< "The date: "<<day<<"."<<month<<"."<<year<<" does not exist."<<endl;

                }
                else
                {
                    cout<< "The date: "<<day<<"."<<month<<"."<<year<<" exist."<<endl;
                }
            }
            else if(month==2)
            {
                if((year%4==0 && year%100!=0) || (year%400==0))
                {
                    if(day>29)
                    {
                        cout<< "The day: "<<day<<"."<<month<<"."<<year<<" does not exist."<<endl;
                    }
                    else
                    {
                        cout<< "The day: "<<day<<"."<<month<<"."<<year<<" exist."<<endl;
                    }

                }
                else
                {
                    if(day>28)
                    {
                        cout<< "The date: "<<day<<"."<<month<<"."<<year<< " does not exist."<<endl;
                    }
                    else
                    {
                        cout<< "The date: "<<day<<"."<<month<<"."<<year<< " exist."<<endl;
                    }
                }

            }

        }

};


int main()
{
    int i, n;
    cout<< "Input total date: ";
    cin>>n;
    Date d[n];

    for(i=0; i<n; i++)
    {
        cout<< "Date NO: "<<i+1<<endl;
        d[i].input();
        cout<<endl<<endl;
    }

    cout<< "...................Validity Check Out................."<<endl;
    for(i=0; i<n; i++)
    {
        cout<< "Day #: "<<i+1<<endl;
        d[i].validityCheck();
        cout<<endl<<endl;
    }

}





















