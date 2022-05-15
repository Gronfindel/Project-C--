#include <iostream>
int stonetolb(int);
int main()
{
    int stone;
    std::cout<<"Введите вес в стоунах:";
    std::cin>>stone;
    std::cout<<stone<<" Стоунов = "<<stonetolb(stone)<<" Фунтов.\n";
    return 0;
}
int stonetolb(int sts)
{
    return 14*sts;
}