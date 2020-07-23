#include <iostream> 
#include "SavingsAccount.h" // include definition of class SavingsAccount from SavingsAccount.h

using namespace std;


SavingsAccount::SavingsAccount(double& balance_, double& rate_) :Account(balance_)// creating a savings account, derived from Account class
{
    balance = balance_;
    rate = rate_; // Assigns the local value for rate to the data member
}

double SavingsAccount :: calculateInterest()
{
    double interest; // Creating a double variable
    interest = (balance * rate)/100; // Calulate the interest in this account
    return interest;
}
