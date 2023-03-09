#include "Cd.h"
#include <iostream>
#include <string.h>
int Cd::num_Cd=0;
Cd::Cd()
{
    performers=new char[1];
    performers[0]='\0';
    label=new char [1];
    label[0]='\0';
    selections=0;
    playtime=0;
    num_Cd++;
}
Cd::Cd(char *s1,char *s2,int n, double x)
{
    performers=new char[strlen(s1)+1];
    strcpy(performers,s1);
    label=new char[strlen(s2)+1];
    strcpy(label,s2);
    selections=n; playtime=x;
    num_Cd++;
}
Cd::Cd(const Cd &d)
{
    performers=new char[strlen(d.performers)+1];
    strcpy(performers,d.performers);
    label=new char[strlen(d.label)+1];
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
    num_Cd++;
}
void Cd::report()const
{
    std::cout<<"Performance: "<<performers<<std::endl;
    std::cout<<"Label: "<<label<<std::endl;
    std::cout<<"Selections: "<<selections<<std::endl;
    std::cout<<"Play time: "<<playtime<<std::endl;
}
Cd &Cd::operator= (const Cd &d)
{
    if(this==&d)return *this;
    delete[]performers;
    delete[]label;
    performers=new char[strlen(d.performers)+1];
    strcpy(performers,d.performers);
    label=new char[strlen(d.label)+1];
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
    return *this;
}