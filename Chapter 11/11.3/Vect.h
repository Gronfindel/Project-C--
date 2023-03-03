#ifndef _VECT_H_
#define _VECT_H_
#include "iostream"
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode{RECT, POL};//RECT-прямоугольные кординаты POL-полярные кординаты
    private:
        double x;//горизонтальное значение 
        double y;// вертикальное значение 
        double ang;//длина вектора
        double mag;//направление вектора в градусах
        Mode mode;
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1,double n2,Mode form=RECT);
        void reset(double n1,double n2,Mode form=RECT);
        ~Vector();
        double xval() const{return x;};//сообщает х
        double yval() const{return y;};//сообщает y
        double angval() const{return ang;};// сообщает модуль 
        double magval() const{return mag;};//сообщает угол
        void polar_mode();//устанавливает режим POL
        void rect_mode();//Устанавливает режим RECT
        //Перегрузка операций
        Vector operator+(const Vector &b)const;
        Vector operator-(const Vector &b)const;
        Vector operator-()const;
        Vector operator*(double n)const;
        //Друзья
        friend Vector operator*(double n,const Vector &a);
        friend std::ostream &operator<<(std::ostream & os,const Vector &v);
    };
}
#endif