#include<iostream>
unsigned long long factorial(int i)
{
    if(i>0)
        return i=i*factorial(i-1);
    else return 1;
}
int main()
{
    using namespace std;
    int n;
    cout<<"Введите число для которого необходимо просчитать факториал не более 21: ";
    while(cin>>n&&n<=21)
    {
        cout <<"Факториал вашего числа равен: "<<factorial(n)<<endl;
        cout<<"Введите следующие число: ";
    }
    cout<<"Вы ввели число превышающие 21, до встречи.";
    return 0;
}