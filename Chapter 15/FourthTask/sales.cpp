#include"sales.h"
using std::string;
sales::bad_index::bad_index(int ix,const string &s):std::logic_error(s),bi(ix){}
sales::sales(int yy)
{
    year=yy;
    for (int i = 0; i < MONTHS; i++)
        gross[i]=0;
}
sales::sales(int yy,const double *gr,int n)
{
    year=yy;
    int lim =(n<MONTHS)? n: MONTHS;
    int i;
    for ( i = 0; i < lim; ++i)
        gross[i]=gr[i];
    for ( ; i < MONTHS; ++i)
        gross[i]=0;
}
double sales::operator[](int i)const
{
    if (i<0||i>=MONTHS)
        throw bad_index(i);
    return gross[i];
}
double &sales::operator[](int i)
{
    if (i<0||i>=MONTHS)
        throw bad_index(i);
    return gross[i];
}
LabelesSales::nbad_index::nbad_index(const string &lb,int ix,const string &s):sales::bad_index(ix,s){lbl=lb;}
LabelesSales::LabelesSales(const string &lb,int yy):sales(yy){label=lb;}
LabelesSales::LabelesSales(const string &lb,int yy,const double *gr,int n):sales(yy,gr,n){label=lb;}
double LabelesSales::operator[](int i)const
{
    if (i<0||i>=MONTHS)
        throw nbad_index(Label(),i);
    return sales::operator[](i); 
}
double &LabelesSales::operator[](int i)
{
    if (i<0||i>=MONTHS)
        throw nbad_index(Label(),i);
    return sales::operator[](i); 
}