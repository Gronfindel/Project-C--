#include <iostream>
int main()
{
    using namespace std;
    short FlowMeter;
    cout<<"Введите расход топлива литров/100км:";cin>>FlowMeter;
    float MPG=(100*3.875)/(float(FlowMeter)*1.609);
    cout<<"Расход в милях на галлон составляет ="<<MPG<<"миль на галлон";
    return 0;
}

