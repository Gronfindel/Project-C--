#include<iostream>
int Fill_array(double arr[],int limit)
{
    using namespace std;
    int i;
    for ( i = 0; i < limit; i++)
    {
        cout << "Enter the " << i + 1 << " element of the array (q to quit):";
        cin>>arr[i];
        if (!cin)
        {
            cout << "Bad imput; input process terminated.\n";
            break;
        }
    }
    return i;
}
void Show_array(const double arr[],int ArrSize)
{
    for (short i = 0; i < ArrSize; i++)
    {
        std::cout<<"Element of the array "<<i+1<<": "<<arr[i]<<std::endl;
    }
}
void Reverse_array(double arr[],int ArrSize)
{
    int i, j;
    double value;
    j = ArrSize-1;
    for (int i = 0; i < j; i++,j--)
    {
        value=arr[i];
        arr[i]=arr[j];
        arr[j]=value;
    }
}
int main()
{
    int limit; 
    std::cout<<"Enter size array:";std::cin>>limit;
    double arr[limit];
    int ArrSize=Fill_array(arr,limit);
    Show_array(arr,ArrSize);
    Reverse_array(arr,ArrSize);
    Show_array(arr,ArrSize);
    return 0;
}