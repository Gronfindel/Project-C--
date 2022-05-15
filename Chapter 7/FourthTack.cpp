#include<iostream>
long double probability(unsigned nembers,unsigned pick);
int main()
{
    using namespace std;
    short total,choices,MegaNamber,TotalNamber;//ввод общего количества номеров и номеров которых нужно угадывать
    cout << "Enter the total numbers of choices on the game card and"
            "the number of pick allowed:\n"
            "As well as a mega number from the second range of numbers:\n";
    while ((cin>>total>>choices>>TotalNamber>>MegaNamber)&&choices<=total&&MegaNamber<=TotalNamber)
    {
        cout<<"You have one chance in ";
        cout<<probability(total,choices)*probability(TotalNamber,MegaNamber);//Вычисление и вывод шансов
        cout<<" of winning.\n";
        cout<<"next four numbers(q to quit): ";
    }
    cout<<"Bye\n";
    return 0;
}
long double probability(unsigned numbers,unsigned picks)
{
    long double result=1.0;
    long double n;
    unsigned p;
    for (n=numbers,p=picks;p>0; n--,p--)
        result=result*n/p;
    return result;
}