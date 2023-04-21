#include<iostream>
#include<cstring>
using namespace std;
struct Pizza
{
    string NameCompany;
    double DiameterPizza;
    double WeightPizza;
};
int main()
{  
    Pizza first={};
    cout<<"Введите название компании пиццы: ";getline(cin,first.NameCompany);
    cout<<"Введите диаметр пиццы: ";cin>>first.DiameterPizza;
    cout<<"Введите вес пиццы: ";cin>>first.WeightPizza;
    cout<<"Введеная вами пицца имеет информацию:"<<first.NameCompany<<", "<<first.DiameterPizza<<", "<<first.WeightPizza;

}