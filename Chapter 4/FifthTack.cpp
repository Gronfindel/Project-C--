#include<iostream>
using namespace std;
struct CandyBar
{
    string name;
    float volume;
    int ccal;
};
int main()
{
    CandyBar snack={"Mocha Munsh",2.3,350};
    cout<<"Название конфет:"<<snack.name<<"\n"<<"Объем занимайемый упаковкой:"<<snack.volume<<"\n"<<"Количество каллорий:"<<snack.ccal<<endl;
    return 0;
}