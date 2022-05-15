#include<iostream>
struct Maecenas
{
    std::string MaecenasName;
    double donations;
};
int main()
{
    using namespace std;
    int m;
    cout << "Введите количество миценатов:";cin >> m;cin.get();
    Maecenas* Sponsors=new Maecenas[m];
    int GreatPatrons,Patrons;
    GreatPatrons=Patrons=0;
    for (short i = 0; i < m; i++)
    {
        cout<<"Введите полное имя мицената:";getline(cin,Sponsors[i].MaecenasName);
        cout<<"Введите сумму пожертвования:";cin>>Sponsors[i].donations;cin.get();
        if (Sponsors[i].donations >= 10000)
            GreatPatrons++;
        else Patrons++;
    }
    cout<<"Great Patrons:\n";
    if (GreatPatrons>0)
    {
        for (short i = 0; i < m; i++)
        {
            if (Sponsors[i].donations>=10000)
            cout<<Sponsors[i].MaecenasName<<endl;
        }  
    }
    else   cout<<"none\n";
    cout << "Patrons:\n";
    if (Patrons > 0)
    {
        for (short i = 0; i < m; i++)
        {
            if (Sponsors[i].donations <= 10000)
                cout << Sponsors[i].MaecenasName<<endl;
        }
    }
    else cout << "none\n";
    delete[]Sponsors;
    return 0;
}
