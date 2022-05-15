#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string name,dessert;
    cout<<"Введите ваше имя:\n";getline(cin,name);
    cout<<"Введите ваш любимый десерт:\n";getline(cin,dessert);
    cout<<"У меня есть вкусняшки "<<dessert<<" для тебя "<<name<<endl;
    return 0;
}