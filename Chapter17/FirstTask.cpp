#include<iostream>
int main()
{
    char cymbol;
    int counter;
    while (std::cin.get(cymbol)&&cymbol!= '$')
        counter++;
    std::cout<<"Counter: "<<counter<<std::endl;
    std::cout<<"Cymbol: "<<cymbol<<std::endl;
}