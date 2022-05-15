#include<iostream>
double flowmeter(int volume,int kilometer)
{
    return double(volume)/kilometer*100;
}
int main()
{
    using namespace std;
    int kil, vol;
    cout << "Введите количество пройденных киллометров:";cin >> kil;
    cout << "Введите количество портаченного топлива:";cin >> vol;
    flowmeter(vol,kil);
    cout<<"Расход топлива составляет: "<<flowmeter(vol,kil)<<" литров на 100 км";
    return 0;
}