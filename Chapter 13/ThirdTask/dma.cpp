#include"dma.h"
#include<cstring>

accDMA::accDMA(const char *l, int r)
{
    label = new char[strlen(l)+1];
    strcpy(label,l);
    rating=r;
}
accDMA::accDMA(const accDMA &as)
{
    label = new char[strlen(as.label)+1];
    strcpy(label,as.label);
    rating=as.rating;
}
accDMA::~accDMA(){delete []label;}
/*************************************************************/
baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    if(this==&rs)return *this;
    delete[] label;
    label = new char[strlen(rs.label)+1];
    strcpy(label,rs.label);
    rating=rs.rating;
    return *this;
}
void baseDMA::ViewAccDMA()const
{
    std::cout<<"BaseDMA label: "<<label<<std::endl;
    std::cout<<"BaseDMA rating: "<<rating<<std::endl;
}
std::ostream &operator<<(std::ostream &os,const baseDMA &rs)
{
    os<<"Label: "<<rs.label<<std::endl;
    os<<"Rating: "<<rs.rating<<std::endl;
    return os;
}
/*************************************************************/
lacksDMA::lacksDMA(const char *c,const char *l, int r):accDMA(l,r)
{
    std::strncpy(color,c,39);
    color[39]='\0';
}
lacksDMA::lacksDMA(const char *c,const accDMA &as):accDMA(as)
{
    std::strncpy(color,c,COL_LEN-1);
    color[39]='\0';
}
void lacksDMA::ViewAccDMA()const
{
    std::cout<<"LacksDMA label: "<<label<<std::endl;
    std::cout<<"LacksDMA rating: "<<rating<<std::endl;
    std::cout<<"LacksDMA color: "<<color<<std::endl;
}
std::ostream &operator<<(std::ostream &os,const lacksDMA &ls)
{
    os<<(const baseDMA &)ls;
    os<<"Color: "<<ls.color<<std::endl;
    return os;
}
/*************************************************************/
hasDMA::hasDMA(const char *s, const char *l, int r):accDMA(l,r)
{
    style=new char[strlen(s)+1];
    strcpy(style,s);
}
hasDMA::hasDMA(const char *s,const accDMA &rs):accDMA(rs)
{
    style=new char[strlen(s)+1];
    strcpy(style,s);
}
hasDMA::hasDMA(const hasDMA &hs):accDMA(hs)
{
    style=new char[strlen(hs.style)+1];
    strcpy(style,hs.style);
}
void hasDMA::ViewAccDMA()const
{
    std::cout<<"hasDMA label: "<<label<<std::endl;
    std::cout<<"hasDMA rating: "<<rating<<std::endl;
    std::cout<<"hasDMA style: "<<style<<std::endl;
}
hasDMA &hasDMA::operator=(const hasDMA &hs)
{
    if(this==&hs)return *this;
    delete []style;
    hasDMA::operator=(hs);
    style=new char[strlen(hs.style)+1];
    strcpy(style,hs.style);
    return *this;
}
std::ostream &operator<<(std::ostream &os, const hasDMA &hs)
{
    os<<(const baseDMA &)hs;
    os<<"Style: "<<hs.style<<std::endl;
    return os;
}
