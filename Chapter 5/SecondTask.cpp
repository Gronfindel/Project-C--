#include<iostream>
#include<array>
int main()
{
    using namespace std;
    array<long double,101>factorials;
    factorials[0]=factorials[1]=1.0L;
    for (int i = 2; i <=100; i++)
        factorials[i]=i*factorials[i-1];
    for (int i = 0; i <=100; i++)
        cout<<i<<" != "<<factorials[i]<<endl;
    return 0;
}