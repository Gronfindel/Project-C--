#include<iostream>
int main()
{
    using namespace std;
    int first,summ=0;
    cout<<"Введите целое число: ";cin>>first;
    while (first!=0)
    {
        summ += first;
        cout<<"Сумма введеных ранее чисел: "<<summ<<endl;
        cin>>first;
    }
    cout << endl<<"Сумма всех введеных чисел: "<<summ<<endl;
    return 0;
}