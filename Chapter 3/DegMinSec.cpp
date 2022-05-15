#include<iostream>
int main()
{
    using namespace std;
    const short Sec_per_min=60;
    const short Min_per_degree=60;
    cout<<"Enter a latitude in degrees, minutes, and seconds:\n";
    short sec,min,degree;
    cout<<"First, enter the degrees:";cin>>degree;
    cout<<"Next, enter the minutes of arc:";cin>>min;
    cout<<"Finally, enter the seconds of arc:"; cin>>sec;
    double Fin_degree=(float(sec)/Sec_per_min+float(min))/Min_per_degree+degree;
    cout<<degree<<" degrees,"<<min<<" minutes,"<<sec<<" seconds =" <<Fin_degree<<" degrees\n";
    return 0;
}