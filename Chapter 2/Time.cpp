#include<iostream>
using namespace std;
void time(int,int);
int main()
{
    cout<<"Введите часы:";
    int h,m;
    cin>>h;
    cout<<"Введите минуты:";
    cin>>m;
    time(h,m);
    return 0;
}
void time(int h,int m)
{
    cout<<"Время:"<<h<<":"<<m;
}
