#include <iostream> 
#include "CheckingAccount.h" // include definiton of class CheckingAccount from CheckingAccount.h

using namespace std;

CheckingAccount::CheckingAccount (double balance, double tax):Account (balance)
{
    this->tax = tax;
}

void CheckingAccount::credit(double amount)
{
    Account::credit(amount - tax);
}

void CheckingAccount::debit(double amount)
{
    double amount = (amount + tax);
    if (getBalance() < amount)
    {
        cout << "The debit amount does not exceed the account balance." << endl;
    }
    else
    {
        Account::debit(amount);

    }
}