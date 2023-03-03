#include "iostream"
using std::cout;
#include "stonewt.h"
Stonewt::Stonewt(double lbs,int i)
{
    stone=int(lbs)/Lbs_per_stn;
    pds_left=int(lbs)%Lbs_per_stn;
    dPounds=lbs;iPounds=int(dPounds);
    SetMode(i);
}
Stonewt::Stonewt(int stn,double lbs,int i)
{
    SetMode(i);
    stone=stn;
    pds_left=lbs;
    dPounds=stn*Lbs_per_stn+(lbs*0.1);
    iPounds=int(dPounds);
}
Stonewt::Stonewt(){stone=dPounds=pds_left=iPounds=0;mode=stonew;}
Stonewt::~Stonewt(){}
void Stonewt::SetMode(int i)
{
    if(i==1)mode=stonew;
    else if(i==2)mode=pound;
    else if (i==3)mode=doublePounds;
    else
        cout << "incorrect mode, enter a number from 1 to 3\n";
}
std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    if(s.mode==Stonewt::stonew)
    {
        os<<s.stone<<" stone, "<<s.pds_left<<" pounds\n";
    }
    else if(s.mode==Stonewt::doublePounds)
    {
        os<<s.dPounds<<" double pounds\n";
    }
    else os<<s.iPounds<<" integer pounds\n";
}
Stonewt Stonewt::operator+(Stonewt &s)const
{
    double Summ;
    Summ=dPounds+s.dPounds;
    Stonewt result(Summ,1);
    return result;
}
Stonewt Stonewt::operator-(Stonewt &s) const
{
    double subtraction;
    subtraction=dPounds-s.dPounds;
    Stonewt result(subtraction,1);
    return result;
}
Stonewt Stonewt::operator*(Stonewt &s) const
{
    double multiplication;
    multiplication = dPounds * s.dPounds;
    Stonewt result(multiplication, 1);
    return result;
}
Stonewt Stonewt::operator/(Stonewt &s) const
{
    double division;
    division = dPounds / s.dPounds;
    Stonewt result(division, 1);
    return result;
}
// void Stonewt::show_stn()const
// {
//     cout<<stone<<" stone, "<<pds_left<<" pounds\n";
// }
// void Stonewt::show_lbs()const
// {
//     cout<<pounds<<" pounds\n";
// }