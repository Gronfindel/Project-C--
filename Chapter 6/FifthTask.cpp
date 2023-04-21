#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    float tvarp,TaxTvarp;TaxTvarp=0;
    cout<<"Enter your income:";cin>>tvarp;
    while (tvarp>0&&tvarp!=isprint(tvarp))
    {
        if (tvarp<5000)
            cout<<"The tax is: "<<TaxTvarp<<endl;
        else if (tvarp>=5000&&tvarp<15000)
        {
            TaxTvarp=(tvarp-5000)*0.1;
            cout<<"The tax is: "<<TaxTvarp<<endl;
        }
        else if (tvarp>=15000&&tvarp<35000)
        {
            TaxTvarp=10000*0.1+(tvarp-15000)*0.15;
            cout << "The tax is: " << TaxTvarp<<endl;
        }
        else
        {
            TaxTvarp = 10000 * 0.1 + 20000 * 0.15 + (tvarp-35000)*0.2;
            cout << "The tax is: " << TaxTvarp << endl;
        }
        cout << "Enter your income:";
        cin >> tvarp;
    }
    cout<<"bye!"<<endl;
    return 0;
}