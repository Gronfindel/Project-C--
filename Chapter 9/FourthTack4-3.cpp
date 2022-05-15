#include"FourthTack4-2.cpp"
#include"FourthTack4.h"
#include<iostream>
int main()
{
    //SALES::Sales s1;
    //SALES::setSales(s1);
    //SALES::showSales(s1);
    double arr[SALES::QUARTES]={258.34,308.59,150.698,385.27};
    SALES::Sales s2;
    SALES::setSales(s2,arr,SALES::QUARTES);
    SALES::showSales(s2);
    return 0;
}