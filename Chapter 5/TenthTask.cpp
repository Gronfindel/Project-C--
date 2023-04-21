#include<iostream>
int main()
{
    using namespace std;
    int Row;
    cout<<"Введите количество строк: ";cin>>Row;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j<Row; j++)
        {
            cout<<" . ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"\b\b\b";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}