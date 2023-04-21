#include"FourthTask4.h"
#include<iostream>
namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        double average=0.0;
        s.min=ar[0];
        for (int i = 0; i < QUARTES; i++)
        {
            s.sales[i]=ar[i];
            if (s.min>ar[i])
                s.min=ar[i];
            else if(s.max<ar[i])
                s.max=ar[i];
            average+=ar[i];
        }
        s.average=average/QUARTES;
    }
    void setSales(Sales &s)
    {
        using namespace std;
        double average = 0.0;
        for (int i = 0; i < QUARTES; i++)
        {
            cout << "Enter " << i + 1 << " quarterly sales: ";cin>>s.sales[i];
            average += s.sales[i];
        }
        s.min = s.sales[0];
        for (int i = 0; i < QUARTES; i++)
        {;
            if (s.min > s.sales[i])
                s.min = s.sales[i];
            else if (s.max < s.sales[i])
                s.max = s.sales[i];
        }
        s.average = average / QUARTES;
    }
    void showSales(const Sales &s)
    {
        using namespace std;
        for (int i = 0; i < QUARTES; i++)
            cout<<i+1<<" element of array: "<<s.sales[i]<<endl;
        cout<<"Array average: "<<(double)s.average<<endl;
        cout<<"Array minimum: "<<(double)s.min<<endl;
        cout<<"Array maximum: "<<(double)s.max<<endl;
    }
}