#include<iostream>
template<typename TypeT>
TypeT max(TypeT *mass, int size=5)
{
    TypeT T=0;
    for (int i = 0; i < size; i++)
    {
        if (mass[i]>=T)
            T=mass[i];
    }
    return T;
}
int main()
{
    int arr[]={1,4,22,12,36};
    double arri[]={2.5,14.2,42.6,26,6,75};
    std::cout << "The maximum value in the array: "<<max(arr)<<" and "<<max(arri);
}