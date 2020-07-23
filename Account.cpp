#include <iostream>
#include "Account.h" // Include definition of class Account from Account.h

using namespace std;

Account::Account()
{
    balance = 0.0;
}

Account::Account(double balance)
{
    if(balance >= 0.0)
    {
        this->balance = balance; // Assigning local variable value to the data member
    }
    else
    {
        this->balance = 0.0; // Error message when the balance is negative
        cout << "Error : The initial balance was invalid. Current balance to 0.0" << endl; 
    }
}

double Account::getBalance()
{
    return this->balance; // Chain function calls 
}

void Account::credit(double amount)
{
    balance += amount; // Add the amount to the balance of the account balance
}

bool Account::debit(double amount)
{
    if (balance >= amount) // Verify if there are enough money in the Account
    {
        balance -= amount; // Substract the amount of the account balance
        return true;
    }
    else
    { // Error message because there is not enough money
        cout << "Debit's amount exceeds account's balance." << endl; 
        return false;
    }
    
}

Account::~Account() // Destructor
{}
