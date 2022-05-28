#include"FourthTack.h"
#include<iostream>
SALES::Sales::Sales(){}
SALES::Sales::Sales(double arr[], int arrSize)
{
    double sum = 0.0;
    min = arr[0];
    for (int i = 0; i < arrSize; i++)
    {
        sales[i] = arr[i];
        if (min > arr[i])
            min = arr[i];
        else if (max < arr[i])
            max = arr[i];
        sum += arr[i];
    }
    average=sum/arrSize;
}
void SALES::Sales::setSales()
{
    using namespace std;
    double sum = 0.0;
    for (int i = 0; i < QUARTES; i++)
    {
        cout << "Enter " << i + 1 << " quarterly sales: ";
        cin >> sales[i];
        sum += sales[i];
    }
    min = sales[0];
    for (int i = 0; i < QUARTES; i++)
    {
        ;
        if (min > sales[i])
            min = sales[i];
        else if (max < sales[i])
            max = sales[i];
    }
    average =sum/QUARTES;
}
void SALES::Sales::showSales()
{
    using namespace std;
    for (int i = 0; i < QUARTES; i++)
    cout << i + 1 << " element of array: " << sales[i] << endl;
    cout << "Array average: " << (double)average << endl;
    cout << "Array minimum: " << (double)min << endl;
    cout << "Array maximum: " << (double)max << endl;
}
SALES::Sales::~Sales(){}