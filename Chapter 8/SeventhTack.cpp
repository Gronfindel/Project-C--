#include<iostream>
template<typename T>
void ShowArray(T arr[],int n)
{
    using namespace std;
    cout<<"template A\n";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<' ';
        cout<<endl;
}
template<typename T>
void ShowArray(T * arr[],int n)
{
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] <<' ';
    cout << endl;
}
template<typename T>
double SumArray(T arr[],int n)
{
    double SumArray=0;
    for (int i = 0; i < n; i++)
        SumArray+=arr[i];
    return SumArray;
}
template <typename T>
double SumArray(T *arr[], int n)
{
    double SumArray=0;
    for (int i = 0; i < n; i++)
        SumArray+=*arr[i];
    return SumArray;
}
struct depts
{
    char name[50];
    double amount;
};
int main()
{
    using namespace std;
    int things[6]={13,31,103,301,310,130};
    struct depts mr_E[3]=
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double *pd[3];
    for (int i = 0; i < 3; i++)
        pd[i]=&mr_E[i].amount;
    cout<<"Listing Mr. E's counts of things:\n";
    ShowArray(things,6);
    cout<<"Sum of array A: "<<SumArray(things,6)<<endl;
    cout<<"Listing Mr. E's debts:\n";
    ShowArray(pd,3);
    cout << "Sum of array B: " << SumArray(pd, 3) << endl;
    return 0;
}