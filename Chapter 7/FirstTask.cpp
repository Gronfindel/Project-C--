#include<iostream>
double HMean(double x1 ,double y1)
{
    double harmonic =2.0*x1*y1/(x1+y1);
    return harmonic;
}
int main()
{
    using namespace std;
    double x,y;
    cout<<"Enter the x and y values: ";
    while (cin>>x>>y&&(x&&y!=0))
    {   
        HMean(x,y);
        cout<<"Harmonic mean equals: "<<HMean(x,y)<<endl;
        cout<<"Next two nambers (0 and q to quit): ";
    }
    cout<<"Done.\n";
    return 0;
}