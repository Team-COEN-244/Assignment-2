#ifndef CheckinAccount_H // prevent multiple inclusion of header 
#define CheckingAccount_H
#include "Account.h"

class CheckingAccount : public Account
{
    double tax;

    public: 
    
    CheckingAccount(); // Default construcot
    CheckingAccount (double balance, double tax); // Constructor
    void credit (double amount);
    double debit (double amount);
    ~CheckingAccount(); // Default destructor
};

#endif
