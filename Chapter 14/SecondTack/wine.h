#ifndef WINE_H_
#define WINE_H_
#include<iostream>
#include<valarray>
template<class T1,class T2>
class Pair
{
private:
    T1 a; //valarray<int> a
    T2 b;
public:
    Pair(){}
    T1 &first();
    T2 &second();
    T1 first()const{return a;}
    T2 second()const{return b;}
    Pair(const T1 &a,const T2 &b):a(a),b(b){}
    Pair<T1,T2> &operator=(const Pair<T1,T2> &pa);
};
template<class T1,class T2>
T1 &Pair<T1,T2>::first()
{
    return a;
}
template<class T1,class T2>
T2 &Pair<T1,T2>::second()
{
    return b;
}
template<class T1,class T2>
Pair<T1,T2> &Pair<T1,T2>::operator=(const Pair<T1,T2> &pa)
{
    if (this==&pa)return *this;
    this->a=pa.a;
    this->b=pa.b;
    return *this; 
}
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt,ArrayInt> PairArray;

class wine:private std::string, private PairArray
{
private:
    int years;
public:
    wine():std::string("None"),years(0),PairArray(){}
    wine(const char *l, int y,const int yr[],const int bot[]):std::string(l),years(y),PairArray(ArrayInt(yr,y),ArrayInt(bot,y)){}
    wine(const char *l, int y):std::string(l),years(y),PairArray(ArrayInt(y),ArrayInt(y)){}
    void GetBottles();
    std::string &Label();
    int sum();
    void Show();
};
void wine::GetBottles()
{
    using namespace std;
    cout<<"Enter "<<Label()<<" data for "<<years<<" years(s):"<<endl;
    for (int i = 0; i < years; i++)
    {
        cout<<"Enter year: ";
        cin>>PairArray::first()[i];
        cout<<"Enter bottles for that year: ";
        cin>>PairArray::second()[i];
    } 
}
std::string &wine::Label()
{
    return (std::string &)*this;
}
int wine::sum()
{
    return PairArray::second().sum();
}
void wine::Show()
{
    using namespace std;
    cout<<"Wine: "<<string(*this)<<endl;
    cout<<"     Year     Bottles"<<endl;
    for (int i = 0; i < years; i++)
    {
        cout<<"     "<<PairArray::first()[i]<<"     "<<PairArray::second()[i]<<endl;
    }    
}
#endif