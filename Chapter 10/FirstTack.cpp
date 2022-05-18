#include"FirstTack.h"
#include<iostream>
using namespace std;
account::account()
{
    Name="unknown";
    accountNumber=" ";
    balance=0.0;
}
account::account(const std::string &Name_, const std::string &accountNumber_, double balance_)
{
    Name=Name_;
    accountNumber=accountNumber_;
    balance=balance_;
}
void account::show() const
{
    cout<<"Name account: "<<Name<<endl<<"Account naumber: "<<accountNumber<<endl<<"Account balance: "<<balance<<endl;
}
void account::addition(double addBalance)
{
    balance+=addBalance;
}
void account::withdrawal(double withBalance)
{
    balance-=withBalance;
}
account::~account(){}