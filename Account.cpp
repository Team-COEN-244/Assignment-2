#include <iostream>
#include "Account.h" // include definition of class Account from Account.h

using namespace std;

Account::Account(double balance)
{
    if(balance > 0.0)
    {
        this->balance = balance; // assigning local variable value to the data member
    }
    else
    {
        this->balance = 0.0
        cout << "Error : No balance" << endl;
    }
}
double Account::getBalance()
{
    return this->balance; //chain function calls 
}
void Account::credit(double amount)
{
    balance += amount;
}
void Account::debit(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
    }
    else
    {
        cout << " The debit amount does not exceed the account balance." << endl;
    }
    
}
