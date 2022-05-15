#include<iostream>
int main()
{
    using namespace std;
    int TotalBooksSale=0;
    int* NumberBooks=new int[12];
    const char* mounth[] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
    for (short i=0; mounth[i] < mounth[12]; i++)
    {
        cout<<"Введите колчествко книг проданных в "<<mounth[i]<<" : ";
        cin>>NumberBooks[i];
        TotalBooksSale+=NumberBooks[i];  
    }
    delete[]NumberBooks;
    cout<<"Количество книг проданных за год = "<<TotalBooksSale;
    return 0;
}