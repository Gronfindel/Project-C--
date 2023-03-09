#include<iostream>
#include"Classic.cpp"
#include"Cd.cpp"
void Bravo(const Cd &disk);
int main()
{
    Cd c1("Baetles","Capitol",14,35.5);
    Classic c2=Classic("Piano Sonata in B flat, Fantasia in C","Alfred brendel","Philips",2,57.17);
    Cd *pcd=&c1;//Непосредственное исползование обьектов
    std::cout<<"Using object directly:\n";
    c1.report();//использование метода Cd
    c2.report();//использование метода Classic
    //Использование указателя на обьекты типа cd *
    std::cout<<"Using type cd * pointer to objects:\n";
    pcd->report();//использование метода  Cd для обьекта cd 
    pcd=&c2;
    pcd->report();//использование метода classic для обьекта Classic
    //вызов аргумента функции с аргументом--сылкой на Cd
    std::cout<<"Calling a function with a Cd reference argument:\n";
    Bravo(c1);Bravo(c2);
    //Тестирование присваивания 
    std::cout<<"Testing assignment: ";
    Classic copy;
    copy =c2; copy.report();
    return 0;
}
void Bravo(const Cd &disk)
{
    disk.report();
}