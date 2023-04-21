#include<iostream>
struct Car
{
    std::string namecar;
    short YearOfIssue;
};
int main()
{
    using namespace std;
    short x;
    cout<<"Сколько автомобилей необходимо добавить в каталог? ";(cin>>x).get();
    Car* ps=new Car[x];
    for (int i = 0; i < x; i++)
    {
        cout<<"Автомобиль №"<<(i+1)<<endl;
        cout<<"Введите производителя автомобиля: ";getline(cin,ps[i].namecar);
        cout<<"\nУкажите год выпуска: ";(cin>>ps[i].YearOfIssue).get();
    }
    cout<<"Ваша коллекция:"<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<ps[i].YearOfIssue<<" "<<ps[i].namecar<<endl;
    }
    delete[]ps;
    return 0;
}
