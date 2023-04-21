#include"SixthTack.h"
#include<iostream>
Move::Move(double a,double b)
{   
    x=a;y=b;
}
void Move::showmove() const
{
    using namespace std;
    cout<<"X= "<<x<<" Y= "<<y<<endl;
}
Move Move::add(const Move &m)
{
    x+=m.x;
    y+=m.y;
    return *this;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
Move::~Move(){}