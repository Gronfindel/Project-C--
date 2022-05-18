#include"FirstTack.h"
#include"FirstTack.cpp"
#include<iostream>
using namespace std;
int main()
{
    account Def;
    Def.show();
    Def.addition(430);
    Def.withdrawal(230);
    Def.show();
    account acc("Elena georgievna","#3.14",23.5);
    acc.addition(242.352);
    acc.withdrawal(280);
    acc.show();
    return 0;
}