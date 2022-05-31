#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode{RECT,POL};
    private:
        double x;// Горизонтальное знаечение
        double y;// Вертикальное значение
        double mag;//длина вектора
        double ang;// направление вектора в градусах
        Mode mode;// RECT или POL
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode form=RECT);
        void reset(double n1, double n2, Mode form=RECT);
        ~Vector();
        double xval() const{return x;}//сообщает значение Х
        double yval() const{return y;}//сообщает значение Y
        double magval() const{return mag;}// сообщает модуль
        double angval() const{return ang;}// сообщает угол
        void polar_mode();//устанавливает режим в POL
        void rect_mode();// устанавливает режим RECT
        Vector operator+(const Vector & b)const;
        Vector operator-(const Vector & b)const;
        Vector operator-()const;
        Vector operator*(double n) const;
        friend Vector operator*(double n,const Vector & a);
        friend std::ostream & operator <<(std::ostream & os, const Vector & V);
    };
}
#endif