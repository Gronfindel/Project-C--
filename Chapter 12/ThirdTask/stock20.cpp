#include"stock20.h"
#include<iostream>
#include<cstring>
Stock::Stock()
{
    company=new char[1];
    company[0]='\n';
    shares=0;
    share_val=0.0;
    total_val=0.0;
}
Stock::Stock(const char *co, long n, double pr)
{
    company=new char[std::strlen(co)+1];
    strcpy(company,co);
    if (n<0)
    {
        std::cout<<"Number of shares can't be negative:"<<company<<" shares set to 0.0\n";
        shares=0;
    }
    else shares =n;
    share_val=pr;
    set_tot();
}
Stock::~Stock(){delete[] company;}
void Stock::buy(long num,double price)
{
    if(num<0)
    {
        std::cout<<"Number of shares purchased can't be negative. Transaction is aborted.\n";
    }
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }
}
void Stock::sell(long num,double price)
{
    using std::cout;
    if(num<0)
    {
        cout<<"Number of shares sold can't be negative. Transaction is aborted.\n";
    }
    else 
    {
        shares-=num;
        share_val=price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val=price;
    set_tot();
}
std::ostream &operator<<(std::ostream &os,const Stock &st)
{
    os<<st.company;
    return os;
}
const Stock &Stock::topval(const Stock &s)const
{
    if(s.total_val>total_val)
    return s;
    else return *this;
}