#include"FifthTaskStruct.h"
#ifndef FifthTackStack_h
#define FifthTackStack_h
typedef customer Item;
class Stack
{
private:
    enum {MAX=10}; //константа, специфичная для класса 
    Item items[MAX];//хранит элементы стека
    int top;//индекс вершины стека
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);//Возвращает False, если стек полон и true если стек пуст. Добавляет элемент в стек.
    bool pop(Item &item);        //Возвращает False, если стек пуст и true если стек полон. Выталкивает элемент с вершины стека.
    ~Stack();
};
#endif