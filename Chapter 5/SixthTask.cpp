#include<iostream>
#include<array>
int main()
{
    using namespace std;
    int BoksSalePerYear=0;
    int SaleBoksAllTime=0;
    array<string, 12> mounth = { "Jan","Feb","Mar","Apr","May","June","July","Aug","Sept","Oct","Nov","Dec" };
    string years[3]={"1-го года","2-го года","3-го года"};
    int TotalSalePerMounth[3][12];
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 12; y++)
        {
           cout<<"Введите количество проданных книг за "<<mounth[y]<<" "<<years[x]<<" : ";
           cin>>TotalSalePerMounth[x][y];
           BoksSalePerYear+=TotalSalePerMounth[x][y];
        }
        cout<<"Всего книг продано за год : "<<BoksSalePerYear<<endl;
        SaleBoksAllTime+=BoksSalePerYear;
    }
    cout<<"Всего книг продано за все время: "<<SaleBoksAllTime;
    return 0;
}