#include<iostream>
#include"golf.h"
#include<cstring>
using namespace std;
void setgolf(golf& g,const char *name,int hc)
{
    strcpy(g.fullname,name);
    g.handicap=hc;
}
int setgolf(golf& g)
{
    cout<<"Enter golfer's name: ";cin.sync();cin.get(g.fullname,len);
    int checkName;
    if (strlen(g.fullname)>0)
    {
        checkName=1;
        cout << "Enter golfer's handicap: ";
        cin >> g.handicap;
    }
    else checkName=0;
    return checkName;
}
void handicap(golf& g,int hc)
{
    g.handicap=hc;
}
void showgolf(const golf& g)
{
    cout<<"Golfer's name: "<<g.fullname<<" and handicap "<<g.handicap<<endl;
}