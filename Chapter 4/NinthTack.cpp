#include<iostream>
#include<cstring>
struct CandyBar
{
    std::string Name;
    float Weight;
    short Ccal;
};
int main()
{
    using namespace std;
    CandyBar *ps=new CandyBar[3];
    cout<<"Введите название конфет: ";getline(cin,ps[0].Name);
    cout<<"Введите вес конфет: ";cin>>ps[0].Weight;
    cout<<"Введите количесво калорий: ";(cin>>ps[0].Ccal).get();
    cout << "Введите название конфет: ";getline(cin, ps[1].Name);
    cout << "Введите вес конфет: ";cin >> ps[1].Weight;
    cout << "Введите количесво калорий: ";cin >> ps[1].Ccal;cin.get();
    cout << "Введите название конфет: ";getline(cin, ps[2].Name);
    cout << "Введите вес конфет: ";cin >> ps[2].Weight;
    cout << "Введите количесво калорий: ";cin >> ps[2].Ccal;
    cout<<"*************************************************"<<endl;
    cout<<"Навазние первой сладости: "<<ps[0].Name<<" ее вес: "<<ps[0].Weight<<" Кол-во калорий: "<<ps[0].Ccal<<endl;
    cout << "Навазние второй сладости: " << ps[1].Name << " ее вес: " << ps[1].Weight << " Кол-во калорий: " << ps[1].Ccal << endl;
    cout << "Навазние третьей сладости: " << ps[2].Name << " ее вес: " << ps[2].Weight << " Кол-во калорий: " << ps[2].Ccal << endl;
    delete [] ps;
    return 0;
}