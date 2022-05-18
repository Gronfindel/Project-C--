#include <iostream>
#ifndef FirstTack_h
#define FirstTack_h
class account
{
private:
    std::string Name;
    std::string accountNumber;
    double balance;
public:
    account();
    account(const std::string & Name_,const std::string & accountNumber_, double balance_=0.0);
    void show() const;
    void addition(double addBalance);
    void withdrawal(double withBalance); 
    ~account();
};
#endif