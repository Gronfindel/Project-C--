#include<iostream>
int main()
{
    using namespace std;
    int first,second,summ;
    cout<<"Введите целое число:";cin>>first;
    cout<<"Введите целое число до которого будет ссумирование:";cin>>second;
    cout << "Сумма целых чисел от " << first << " до " << second;
    summ=0;
    for (int i = 0; i <=second-first; i++)
    {
        summ+=first+i;
    }  
    cout<<" составляет: "<<summ;
    return 0;
}