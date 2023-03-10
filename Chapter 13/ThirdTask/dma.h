#ifndef DMA_H_
#define DMA_H_
#include<iostream>
class accDMA
{
protected:
    char *label;
    int rating;
public:
    accDMA(const char *l="null",int r=0);
    accDMA(const accDMA &as);
    virtual void ViewAccDMA()const =0;
    virtual ~accDMA();
};

class baseDMA:public accDMA
{
public:
    baseDMA(const char *l="null",int r=0):accDMA(l,r){};
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA &rs);
    virtual void ViewAccDMA()const;
    friend std::ostream &operator<<(std::ostream &os,const baseDMA &rs);
};
/*Производный класс без динамического выделения памяти
Деструктор не нужен
Используется неявный конструктор копированя
Используется неявная операция присваивания*/
class lacksDMA:public accDMA
{
private:
    enum{COL_LEN=40};
    char color[COL_LEN];
public:
    lacksDMA(const char *c="blank",const char *l="null",int r =0);
    lacksDMA(const char *c,const accDMA &rs);
    virtual void ViewAccDMA()const;
    friend std::ostream &operator<<(std::ostream &os, const lacksDMA &rs);
};

class hasDMA:public accDMA
{
private:
    char *style;
public:
    hasDMA(const char *s="none",const char *l="null",int r =0);
    hasDMA(const char *s,const accDMA &rs);
    hasDMA(const hasDMA &hs);
    ~hasDMA(){delete []style;};
    virtual void ViewAccDMA()const;
    hasDMA &operator=(const hasDMA &hs);
    friend std::ostream &operator<<(std::ostream &os, const hasDMA &rs);
};

#endif