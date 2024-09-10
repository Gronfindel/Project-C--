#include"Person.h"
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
Person::Person(const std::string &ln, const char *fn)
{   
    lname=ln;
    strcpy(fname,fn);
}
void Person::Show() 
{
    cout<<"Last Name: "<<lname<<endl;
    cout<<"First Name: "<<fname<<endl;
}
Person::~Person(){}
void Person::Get()
{
    cout<<"Enter last name: ";
    getline(cin, lname);
    cout<<"Enter first name: ";
    cin.getline(fname,'\n');
}
void Gunslinger::Set()
{
    Person::Get();
    cout<<"Enter the time it takes for a sniper to go into combat readiness: ";
    cin>>DRaw;
    cin.get();
    cout<<"Enter number of notches on the rifle: ";
    cin>>Notches;
    cin.get();
}
void Gunslinger::Show()
{
    Person::Show();
    cout<<"Время необходимое снайперу для перехода в боевую готовность: "<<DRaw<<endl;
    cout<<"Количество насечек на винтовке: "<<Notches<<endl;
}
double Gunslinger::Draw()
{
    return DRaw;
}
void PokerPlayer::Set()
{
    Person::Get();
}
int PokerPlayer::Draw()
{
    std::srand(time(0));
    PokerRand=1 + rand()%51;
    return PokerRand;
}
void PokerPlayer::Show() 
{
    Person::Show();
    cout<<"Random card: "<<PokerPlayer::Draw()<<endl;
}
void BadDude::Set()
{
    Gunslinger::Set();
}
double BadDude::Gdraw()
{
    return Gunslinger::Draw();
}
int BadDude::Cdraw()
{
    return PokerPlayer::Draw();
}
void BadDude::Show()
{
    Person::Show();
    cout<<"The time it takes for a sniper to go into combat readiness: "<<BadDude::Cdraw()<<endl;
    cout<<"Random card:"<<BadDude::Gdraw()<<endl;
}