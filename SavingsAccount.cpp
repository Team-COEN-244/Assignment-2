#include <iostream> 
#include "SavingsAccount.h" // include definition of class SavingsAccount from SavingsAccount.h

using namespace std;

SavingsAccount::SavingsAccount()
{
    rate = 0.0;
}

SavingsAccount::SavingsAccount(double balance, double rate_ ) : Account(balance) // creating a checking account, derived from Account class
{
    this->rate = rate_; // Assigns the local value for rate to the data member
}

double SavingsAccount :: calculateInterest()
{
    double interest; // Creating a double variable
    interest = balance * rate; // Calulate the interest in this account de
    return interest;
}

SavingsAccount::~SavingsAccount() // Destructor
{}
