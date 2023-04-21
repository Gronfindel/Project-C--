#include"wine.h"

int main()
{
    using namespace std;
    cout<<"Enter name of wine: ";
    char lab[50];
    cin.getline(lab,50);
    cout<<"Enter numbers of years: ";
    int yrs;
    cin>>yrs;
    wine holding(lab,yrs);
    holding.GetBottles();
    holding.Show();
    const int YRS =3;
    wine test;
    test=holding;
    test.Show();
    int y[YRS]={1993,1995,1998};
    int b[YRS]={48,60,72};
    wine more("Gushing Grape Red",YRS,y,b);
    more.Show();
    cout<<"total bottles for "<<more.Label()<<": "<<more.sum()<<endl;
    cout<<"Bye\n";
    return 0;
}