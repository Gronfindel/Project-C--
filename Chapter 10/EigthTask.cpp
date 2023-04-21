#include"EigthTask.h"
#include<iostream>
List::List()
{
    top = 0;
}
bool List::isempty() const // Пустой стек
{
    return top == 0;
}
bool List::isfull() const //Полный стек
{
    return top == MAX;
}
bool List::push(const Item &item) //Добавление в список
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
void List::visit(void (*pf)(Item&))
{
    for (int i = 0; i <MAX; i++)
        (*pf)(items[i]); 
}
void List::show() const
{
    for (int i = 0; i < MAX; i++)
        std::cout<<i+1<<"-Record: "<<items[i]<<std::endl;
}
List::~List() {}