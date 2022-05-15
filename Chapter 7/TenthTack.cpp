#include<iostream>
double sum(double x, double y)
{
    return x+y;
}
double calculate(double x, double y,double (*sum)(double x, double y))
{
    double g=(x*y)/(*sum)(x,y);
    return g;
}
double add(double x,double y)
{
    return x-y;
}
int main()
{
    using namespace std;
    double x,y;
    cout<<"Enter x and y(q to quit):\n";
    while (cin >> x >> y)
    {
        cout<<"Function add="<<add(x,y)<<endl;
        cout<<"Function sum="<<sum(x,y)<<endl;
        cout<<"function calculate ="<<calculate(x,y,sum)<<endl;
    }
    cout<<"Done.";
    return 0;
}