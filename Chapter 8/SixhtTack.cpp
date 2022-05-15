#include<iostream>
#include<cstring>
template<typename T>
T maxn(T* arr, int size)
{
    T maxValue=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>=maxValue)
            maxValue=arr[i];
    }
    return maxValue;
}
template<>const char* maxn(const char**arr,int size)
{
    int maxStrI=strlen(*arr);
    const char* maxStr=*arr;
    for (int i = 0; i < size; i++)
    {   
        if (maxStrI<strlen(*(arr+i)))
        {
            maxStrI = strlen(*(arr + i));
            maxStr=*(arr+i);
        }
    }
    return maxStr;    
}
int main()
{
    int sizeI=6; int sizeD=4;
    int arrI[sizeI]={12,5,22,32,45,28};
    double arrD[sizeD]={14.5,25.598,12.9,15.3};
    const char *cars[] = {"Audi", "BMW", "Bentley", "CHRYSLER", "BUGATTI"};
    std::cout << "The maximum value in the array: " << maxn(arrI, sizeI) << " and " << maxn(arrD, sizeD)<<std::endl;
    std::cout<<"Max word in array: "<<maxn(cars,5);
}