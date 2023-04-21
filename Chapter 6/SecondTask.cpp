#include<iostream>
#include<array>
#include<cctype>
int main()
{
    using namespace std;
    array<double,10> Donations;
    int i,j;
    i=j=0;
    double MeanDonations,SummDonations;
    MeanDonations=SummDonations=0.0;
    cout<<"Введите сумму пожертвований: ";cin>>Donations[i];
    while(i<10)
    {
        if (Donations[i]!=isalpha(Donations[i])&&Donations[i]!=isspace(Donations[i]))
        {
            SummDonations += Donations[i];
            cout<<"Введите сумму следующего пожертвования: ";
            i++;
            cin>>Donations[i];
        }
        else
        {
            cout<<"Вы ввели символ вместо числа."<<endl;
            break;
        }
    } 
    MeanDonations=(SummDonations/i);
    for (i = 0; i < 10; i++)
    {
        if (MeanDonations<Donations[i])
            j++; 
        else continue;
    }
    cout<<"Среднее значение пожертвований равно = "<<MeanDonations<<endl;
    cout<<"Число пожертвований больше среднего значения пожертвований = "<<j;
    return 0;
}