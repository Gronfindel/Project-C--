#include<iostream>
#include"ThirdTack.h"
#include <cstring>
Golf::Golf(const char * fullName, int hp)
{
    strcpy(fullname,fullName);
    handicap=hp;
}
int Golf::setGolf()
{
    using namespace std;
    cin.sync();
    cout << "Enter golfer's name: ";
    cin.get(fullname, len);
    int checkName;
    if (strlen(fullname) > 0)
    {
        checkName = 1;
        cout << "Enter golfer's handicap: ";
        cin >> handicap;
    }
    else
        checkName = 0;
    Golf golfer(fullname, handicap);
    *this = golfer;
    return checkName;
}
void Golf::showGolf()
{
    std::cout << "Golfer's name: " << fullname << " and handicap: " << handicap << std::endl;
}
Golf::~Golf(){}