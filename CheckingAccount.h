#ifndef CheckinAccount_H // prevent multiple inclusion of header 
#define CheckingAccount_H
#include "Account.h"

class CheckingAccount : public Account
{
    public: 
    
    CheckingAccount (double balance, double tax);
    void credit (double amount);
    void debit (double amount);

    private: 

    double tax;
};

#endif