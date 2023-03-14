#include <iostream>
#include "Port.cpp"
int main()
{
    Port p1("first","ligth",10);
    p1.Show();
    std::cout<<p1<<endl;
    Port p2("second","Hard",24);
    p2.Show();std::cout<<p2<<endl;
    p2-=4;p2.Show();
    Port p3=p2;
    VintagePort vp1("Vp1",50,"delay",40);
    VintagePort vp2("Vp2",22,"delay 2",20);
    vp1.Show();cout<<vp1;
    vp2.Show();cout<<vp2;
    VintagePort vp3=vp1;
    vp3.Show();
}