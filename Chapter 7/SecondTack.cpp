#include<iostream>
int FillArray(double arr[],int MaxSize)
{   
    double result;
    int i;
    for (i = 0; i < MaxSize; i++)
    {   using namespace std;
        cout << "Enter your golf result " << i + 1 << " (negative meaning to quit): ";
        cin >> result; //Ввод значения
        if(!cin)//неправильный ввод
        {
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input, retry input:";
            cin>>result;
        }
        else if (result < 0) //сигнал для завершения
            break;
        arr[i]=result;
    }
    return i;
}
void ShowArray(const double arr[],int limit)
{
    using namespace std;
    cout<<"Golf result: ";
    for (int i = 0; i < limit; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
double MeanValue(double const arr[],int limit)
{
    int mValue=0;
    for (int i = 0; i < limit; i++)
    {
        mValue=mValue+arr[i];
    }
    return mValue;
}
int main()
{
    double GameResult[10];
    int limit=FillArray(GameResult,10);
    ShowArray(GameResult,limit);
    std::cout<<"Mean value: "<<MeanValue(GameResult,limit);
    return 0;
}