#ifndef STACK_H_
#define STACK_H_
#include "stack.h"

stack::stack(int n)
{
    size = n;
    pitems = new Item[size];
    top=0;
}
stack::stack(const stack &st)
{
    size=st.size;
    pitems =new Item[size];
    for(int i;i<size;i++)
    {
        pitems[i]=st.pitems[i];
    }
    top=st.top;
}
stack::~stack()
{
    delete[]pitems;
}
bool stack::isempty()const
{
    return top==0;
}
bool stack::isfull()const
{
    return top==size;
}
bool stack::push(const Item &item)
{
    bool return_value;
    if (top+1<=size)
    {
        pitems[top+1]=item;
        top++;  
        return_value=true;
    }
    else
    {
        return_value=false;
    }
    return return_value;
}
bool stack::pop(Item &item)
{
    bool return_value;
    if (top>=1)
    {
        item=pitems[top];
        top--;
        return_value=true;
    }
    else return_value=false;
    return return_value;
}
stack &stack::operator=(const stack &st)
{
    if (this==&st)
    {
        return *this;
    }
    else
    {
        delete[]pitems;
        size=st.size;
        pitems=new Item[size];
        for(int i;i<size;i++)
        {
            pitems[i]=st.pitems[i];
        }
        top=st.top;   
    }
}
#endif
