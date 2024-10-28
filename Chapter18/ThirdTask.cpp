#include<iostream>
template <typename T>
long double sum_values(const T &x)
{
    return static_cast<long double>(x);
};
template <typename T,typename ...Args>
long double sum_values(const T &x,const Args &... args)
{
    return static_cast<long double>(x)+sum_values(args...);
}
int main()
{
    using namespace std;
    cout<<sum_values(5.6,25,33,3,2,15.3)<<endl;
}