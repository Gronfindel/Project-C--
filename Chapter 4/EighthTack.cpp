#include <iostream>
#include <cstring>
using namespace std;
struct Pizza
{
    string NameCompany;
    double DiameterPizza;
    double WeightPizza;
};
int main()
{
    Pizza*ps=new Pizza;
    cout << "Введите диаметр пиццы: ";
    cin >> ps->DiameterPizza;cin.get();
    cout << "Введите название компании пиццы: ";
    getline(cin, ps->NameCompany);
    cout << "Введите вес пиццы: ";
    cin >> ps->WeightPizza;
    cout << "Введеная вами пицца имеет информацию:" << ps->NameCompany << ", " << ps->DiameterPizza << ", " << ps->WeightPizza;
    delete ps;
    return 0;
}