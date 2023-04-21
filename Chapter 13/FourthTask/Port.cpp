#include "Port.h"
#include<cstring>
Port::Port(const char *br,const char *st,int b)
{
    brand = new char[strlen(br)+1];
    strcpy(brand,br);strcpy(style,st);
    bottles=b;
}
Port::Port(const Port &p)
{
    brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);strcpy(style,p.style);
    bottles=p.bottles;
}
Port &Port::operator=(const Port &p)
{
    if(this==&p)return *this;
    delete[]brand;
    brand=new char[strlen(p.brand)+1];
    strcpy(brand,p.brand);strcpy(style,p.style);
    return *this;
}
Port &Port::operator+=(int b)
{
    bottles+=b;
}
Port &Port::operator-=(int b)
{
    if(bottles>=b)bottles-=b;
    else std::cout<<"bottles < b, enter value < "<<bottles<<std::endl;
}
void Port::Show()const
{
    std::cout<<"Brand: "<<brand<<"\nStyle: "<<style<<"\nBottles: "<<bottles<<std::endl;
}
ostream &operator<<(ostream &os,const Port &p)
{
    os<<p.brand<<", "<<p.style<<", "<<p.bottles;
    return os;
}

VintagePort::VintagePort():Port("none","vintage",0)
{
    nickname=new char[strlen("none")+1];
    strcpy(nickname,"none");
    year=0; 
}
VintagePort::VintagePort(const char *br,int b,const char *nn, int y):Port(br,"vintage",b)
{
    nickname=new char[strlen(br)+1];
    strcpy(nickname,br);
    year=y;
}
VintagePort::VintagePort(const VintagePort &vp):Port(vp)
{
    nickname=new char[strlen(vp.nickname)+1];
    strcpy(nickname,vp.nickname);
    year=vp.year;
}
VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if(this==&vp)return *this;
    Port::operator=(vp);
    delete []nickname;
    nickname=new char[strlen(nickname)+1];
    strcpy(nickname,vp.nickname);
    year=vp.year;
    return *this;
}
void VintagePort::Show()const
{
    Port::Show();
    std::cout<<"Nickname: "<<nickname<<"\nYear: "<<year<<endl;
}
ostream &operator<<(ostream &os,const VintagePort &vp)
{
    os<<Port(vp);
    os<<vp.nickname<<", "<<vp.year;
    return os;
}