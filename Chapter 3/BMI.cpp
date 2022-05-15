#include<iostream>
#include<cmath>
int main()
{
    using namespace std;
    short foot, inch,LB;
    cout<<"Введите ваш рост в футах:";cin>>foot;
    cout<<"уточните количество дюймов:";cin>>inch;
    cout<<"Введите ваш вес в фунтах:";cin>>LB;
    const float RostMetr=(foot*12+inch)*0.0254;
    const float WeightKg=LB/2.2;
    const float BMI=WeightKg/pow(RostMetr,2);
    cout<<"Ваш индекс массы тела равен:"<<BMI<<endl;
    return 0;
}
