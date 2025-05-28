/*Write a C++ program to implement a class called BankAccount that has private member variables
for account number and balance. Include member functions to deposit and withdraw money from
the account.*/

#include<iostream>
using namespace std;

class BankAccount
{
    int account;
    float balance=0, amount, withdraw;

public:
    void input()
    {
        cout<< "Input BankAccount number: ";
        cin>>account;
        cout<< "Input deposit amount: ";
        cin>>amount;
        cout<< "Input withdraw amount: ";
        cin>>withdraw;
    }

    void diposit()
    {
        balance+= amount;
    }

    void withdrawAmount()
    {
        amount-=withdraw;
    }

    void output()
    {
        cout<< "Account Number\t:"<<account<<endl<< "Total Balance\t:"<<balance<<endl<< "New Balance\t:"<<amount<< endl;
    }

};
int main()
{
    BankAccount b1;
    b1.input();
    b1.diposit();
    b1.withdrawAmount();
    b1.output();
}
