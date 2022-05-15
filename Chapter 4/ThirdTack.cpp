#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char SName[20];char FName[20];
    cout<<"Введите ваше имя:";cin.get(FName,20).get();
    cout<<"Введите вашу фамилию:";cin.get(SName,20).get();
    char CommaSpace[]={", "};
    strcat(CommaSpace,FName);strcat(SName,CommaSpace);
    cout<<"Здесь выведена информация одной строкой: "<<SName;
    return 0;

}