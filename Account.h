#ifndef Account_h // prevent multiple inclusions of header 
#define Account_h

class Account // Account class definition
{
protected:

    double balance; //  Declaring variable

public:

    Account(double& ); // Constructor with known variables
    double getBalance(); // Print the current balance
    virtual void credit(double&); // Declaring credit function
    virtual bool debit(double&); // Declaring debit function
};

#endif
