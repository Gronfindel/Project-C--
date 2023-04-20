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
    Pair(){};
    T1 &first();
    T2 &second();
    T1 first()const{return a;}
    T2 second()const{return b;}
    Pair(const T1 &a,const T2 &b):a(a),b(b){};
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

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt,ArrayInt> PairArray;
class wine
{
private:
    std::string label;
    PairArray Vintage_Bottles;
    int years;
public:

    wine(){}
    wine(const char *l, int y,const int yr[],const int bot[]);
    wine(const char *l, int y);
    void GetBottles();
    std::string &Label();
    int sum();
    void Show();
};
wine::wine(const char *l, int y,const int yr[],const int bot[]):label(l),years(y)
{
    Vintage_Bottles.first()=Vintage_Bottles.second()=ArrayInt(years);
    for (int i=0;i<Vintage_Bottles.first().size();i++)
    {
        Vintage_Bottles.first()[i]=yr[i];
        Vintage_Bottles.second()[i]=bot[i];
    }

}
wine::wine(const char *l, int y):label(l),years(y)
{
    Vintage_Bottles.second()=Vintage_Bottles.first()=ArrayInt(years);
}
void wine::GetBottles()
{
    using namespace std;
    cout<<"Enter "<<label<<" data for "<<years<<" years(s):"<<endl;
    for (int i = 0; i < years; i++)
    {
        cout<<"Enter year: ";
        cin>>Vintage_Bottles.first()[i];
        cout<<"Enter bottles for that year: ";
        cin>>Vintage_Bottles.second()[i];
    }
    
}
std::string &wine::Label()
{
    return label;
}
int wine::sum()
{
    return Vintage_Bottles.second().sum();
}
void wine::Show()
{
    using namespace std;
    cout<<"Wine: "<<label<<endl;
    cout<<"     Year     Bottles"<<endl;
    for (int i = 0; i < years; i++)
    {
        cout<<"     "<<Vintage_Bottles.first()[i]<<"     "<<Vintage_Bottles.second()[i]<<endl;
    }
    
}
#endif