#include<iostream>
#include<string>
int main()
{
    using namespace std;
    char CommaSpace[]={", "};
    string FName,SName,FullName;
    cout<<"Введите ваше имя:";getline(cin,FName);
    cout<<"Введите вашу фамилию:";getline(cin,SName);
    SName+=CommaSpace;
    FullName=SName+FName;
    cout<<"Здесь выведена информация одной строкой:"<<FullName;
}