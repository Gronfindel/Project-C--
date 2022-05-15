#include<iostream>
#include<array>
int main()
{   
    using namespace std;
    array<float,3>Result;
    cout<<"Введите результат первого забега: ";cin>>Result[0];
    cout<<"Введите результат второго забега: ";cin>>Result[1];
    cout<<"Введите результат третьего забега: ";cin>>Result[2];
    cout<<"*************************************************"<<endl;
    cout<<"Первый результат: "<<Result[0]<<endl;
    cout << "Второй результат: " << Result[1] << endl;
    cout << "Третий результат: " << Result[2] << endl;
    cout << "Среднее значение: " << (Result[0]+Result[1]+Result[2])/3 << endl;
    return 0;
}