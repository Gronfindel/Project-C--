#include<iostream>
using namespace std;
int main()
{
    float DafnaNull,CleoNull;
    DafnaNull=CleoNull=100;
    int year=0;
    for (year; CleoNull<=DafnaNull; year++)
    {
        DafnaNull += 10;
        cout<<"Баланс Дафны составляет: "<<DafnaNull<<endl;
        CleoNull += 0.05 * CleoNull;
        cout<<"Баланс Клео составляет: "<<CleoNull<<endl;
    }
    cout<<"Кол-во лет которые потребуются для превосходства Клео над Дафной в материальном плане: "<<year;
    return 0;
}