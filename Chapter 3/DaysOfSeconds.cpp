#include<iostream>
using namespace std;
int main()
{
    long long sec;
    cout<<"Enter the number of seconds:";cin>>sec;
    const int minute=sec/60;// 60 секунд в минуте
    const int hour=minute/60;// количество минут в часе
    const int day=hour/24;// количество часов в сутках
    cout<<sec<<" seconds = "<<day<<" days, "<<hour%60<<" hours, "<<minute%60<<" minutes, "<<sec%60<<"seconds";
    return 0;
}