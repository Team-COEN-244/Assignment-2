#include <iostream> 
#include "CheckingAccount.h" // include definiton of class CheckingAccount from CheckingAccount.h

using namespace std;

CheckingAccount::CheckingAccount()
{
    tax = 0;
}

CheckingAccount::CheckingAccount (double balance, double tax) : Account(balance)
{
    this->tax = tax;
}

void CheckingAccount::credit(double amount)
{
    Account::credit(amount - tax);
}

double CheckingAccount::debit(double amount)
{
    amount += tax;
    if (Account::debit(amount + tax))
    {
        return balance;
    }
    else
    {
        Account::debit(amount + tax);
        return balance;
    }
}

CheckingAccount::~CheckingAccount()
{}
