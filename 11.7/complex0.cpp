#include "iostream"
#include "complex0.h"
complex::complex(double Real,double Imaginary)
{
    real=Real;imaginary=Imaginary;
}
complex complex::operator+(const complex &Comp)
{
    complex summ;
    summ.real=real+Comp.real;
    summ.imaginary=imaginary+Comp.imaginary;
    return summ;
}
complex complex::operator-(const complex &Comp)
{
    complex Subtraction;
    Subtraction.real=real-Comp.real;
    Subtraction.imaginary=imaginary-Comp.imaginary;
    return Subtraction;
}
complex complex::operator*(const complex &Comp)
{
    complex multiplication;
    multiplication.real=(real*Comp.real)-(imaginary*Comp.imaginary);
    multiplication.imaginary=(real*Comp.imaginary)+(imaginary*Comp.real);
    return multiplication;
}
complex operator*(int x,complex &Comp)
{
    complex multiplication(Comp.real*x,Comp.imaginary*x);
    return multiplication;
}
complex operator~(const complex &Comp)
{
    complex conjugation(Comp.real,-Comp.imaginary);
    return conjugation;
}
std::istream &operator>>(std::istream &is,complex &Comp)
{
    std::cout<<"real: ";
    if(is>>Comp.real)
    {
        std::cout<<"imaginary: ";
        is>>Comp.imaginary;
    }
    return is;
}
std::ostream &operator<<(std::ostream &os,const complex &Comp)
{
    os<<"("<<Comp.real<<", "<<Comp.imaginary<<")"<<endl;
    return os;
}
complex::~complex(){}