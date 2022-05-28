#ifndef EigthTack_h
#define EigthTack_h
#include<iostream>
typedef std::string Item;
class List
{
private:
    enum {MAX=40};
    Item items[MAX];
    int top;
public:
    List();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item); //Возвращает False, если стек полон и true если стек пуст. Добавляет элемент в стек.
    void visit(void (*pf)(Item &));
    void show() const;
    ~List();
};
#endif