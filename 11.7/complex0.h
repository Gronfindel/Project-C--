#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_

class complex
{
private:
    double real;
    double imaginary;
public:
    complex(){real=imaginary=0;}
    complex(double Real,double Imaginary);
    complex operator+(const complex &Comp);
    complex operator-(const complex &Comp);
    complex operator*(const complex &Comp);
    friend complex operator*(int x,complex &Comp);
    friend complex operator~(const complex &Comp);
    friend std::ostream &operator<<(std::ostream &os, const complex &Comp);
    friend std::istream &operator>>(std::istream &is, complex &Comp);
    ~complex();
};
#endif