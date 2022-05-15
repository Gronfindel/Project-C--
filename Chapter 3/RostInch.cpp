#include<iostream>
int main()
{
    using namespace std;
    int inch;
    cout<<"Введите ваш рост в дюймах:_____\b\b\b\b\b";
    cin>>inch;
    const int foot = inch / 12;
    double OstInch= inch%12;
    cout<<"Ваш рост равен футам "<<foot<<" и дюймов "<<OstInch<<endl;
    return 0;
}