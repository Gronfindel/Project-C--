#include<iostream>
using namespace std;
double fahr(double);
int main()
{
    cout<<"Введите значение по цельсию:";
    int cel;
    cin>>cel;
    fahr(cel);
    cout << cel << " Градусов цельсия = " << fahr(cel) << " градусам по фаренгейту";
    return 0;
}
double fahr(double c)
{
    //int f=c*1.8+32;
    //cout<<c<<" Градусов цельсия = "<<fahr<<" градусам по фаренгейту";
    return 1.8*c+32;
}