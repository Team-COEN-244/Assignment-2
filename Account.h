#ifndef Account_h // prevent multiple inclusions of header 
#define Account_h

class Account // Account class definition
{
protected:

    double balance; //  Declaring variable

public:
    
    Account(); // Default constructor
    int setAccount(double balance); // Constructor with known variables
    double getBalance(); // Print the current balance
    void credit(double amount); // Declaring credit function
    bool debit(double amount); // Declaring debit function
    ~Account(); // Default destructor
};

#endif
