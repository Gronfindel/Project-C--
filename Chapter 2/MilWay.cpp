#include <iostream>
double ased(double);
int main()
{
    using namespace std;
    cout<<"Введите число в световых годах:";
    double sl;
    cin>>sl;
    ased(sl);
    cout<<sl<< "световых лет = "<<ased(sl)<<" астрономических едениц";
    return 0;
}
double ased(double slet)
{
    return slet*63240;
}