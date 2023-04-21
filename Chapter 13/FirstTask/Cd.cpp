#include "Cd.h"
#include <iostream>
#include <string.h>

Cd::Cd()
{
    performers[0]='\0';
    label[0]='\0';
    selections=0;
    playtime=0;
}
Cd::Cd(char *s1,char *s2,int n, double x)
{
    strcpy(performers,s1);strcpy(label,s2);
    selections=n; playtime=x;
}
Cd::Cd(const Cd &d)
{
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
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
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
    return *this;
}