#include<iostream>
using namespace std;
int main()
{
    long long WorldPop,CountryPop;
    cout<<"Enter the world's population:";cin>>WorldPop;
    cout<<"Enter the population of the country:"; cin>>CountryPop;
    double percentage=double(CountryPop)/double(WorldPop)*100;
    cout<<"The popular of the coutry is "<<percentage<<"% of the world population.";
    return 0;
}