#include"SecondTack.h"
#include<iostream>
#include<cstring>
using namespace std;
Person::Person(const std::string &ln, const char *fn)
{   
    lname=ln;
    strcpy(fname,fn);
}
void Person::Show() const
{
    cout<<"Last Name: "<<lname<<endl;
    cout<<"First Name: "<<fname<<endl;
}
void Person::FormalShow() const
{
    cout << "Last name: " << lname <<" First name: "<<fname<<endl;
}
Person::~Person(){}