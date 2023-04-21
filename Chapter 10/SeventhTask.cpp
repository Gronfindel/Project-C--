#include"SeventhTack.h"
#include<iostream>
#include<cstring>
Plorg::Plorg()
{
    strcpy(name,"Plorga");
    CI=50;
}
Plorg::Plorg(const char *Name,int ci)
{
    strcpy(name, Name);
    CI = ci;
}
void Plorg::changes()
{
    std::cin.sync();
    std::cout<<"Enter new index plorga: ";std::cin>>CI;
}
void Plorg::showPlorg()
{
    std::cout<<"Name plorg: "<<name<<" index plorga: "<<CI<<std::endl;
}
Plorg::~Plorg(){}
