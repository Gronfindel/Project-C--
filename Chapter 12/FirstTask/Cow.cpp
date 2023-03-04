#include "Cow.h"
#include"string.h"
#include"iostream"
Cow::Cow()
{
    name[0]='\n';
    hobby=new char[1];
    hobby[0]='\n';
    weight=0;
}
Cow::Cow(const char *m,const char *ho,double wt)
{
    strcpy(name,m);
    hobby=new char[strlen(ho)+1];
    strcpy(hobby,ho);
    weight=wt;
}
Cow::Cow(const Cow &c)
{
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)];
    strcpy(hobby,c.hobby);
    weight=c.weight;
}
Cow &Cow::operator=(const Cow &c)
{
    if (this==&c)return *this;
    delete[]hobby;
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)];
    strcpy(hobby,c.hobby);
    weight=c.weight;
    return *this;
}
void Cow::ShowCow()const
{
    std::cout<<"Cow name: "<<name<<std::endl;
    std::cout<<"Cow hobby: "<<hobby<<std::endl;
    std::cout<<"Cow weight: "<<weight<<std::endl;
}