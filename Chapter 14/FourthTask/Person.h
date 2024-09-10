#ifndef Person_h
#define Person_h
#include <string>
class Person
{
private:
    static const int  LIMIT=25;
    std::string lname;
    char fname[LIMIT];
protected:
    virtual void Get();
public:
    Person(){lname= "";fname[0]='\0';}
    Person(const std::string & ln,const char * fn="Heyyou");
    virtual void Show () ;
    virtual void Set()=0;
    virtual ~Person()=0;
};

class Gunslinger: virtual public Person
{
private:
    double DRaw; //Время необходимое снайперу для перехода в боевую готовность
    int Notches; //Количество насечек на винтовке
public:
    Gunslinger():Person(),Notches(0),DRaw(0){}
    Gunslinger(const std::string & l,const char *f, double d,int n)
            :Person(l,f),DRaw(d),Notches(n){}
    Gunslinger(const Person &PG,double d,int n)
            :Person(PG),DRaw (d),Notches(n){}
    void Set();
    void Show();
    double Draw();
};

class PokerPlayer:virtual public Person
{
private:
    int PokerRand; 
public:
    PokerPlayer():Person(){}
    PokerPlayer(const std::string &l,const char *f):Person(l,f){}
    PokerPlayer(const Person &PP):Person(PP){}
    int Draw(); //ВОзвращает случайное число от 1 до 52-значение карты
    void Show();
    void Set();
};

class BadDude:public PokerPlayer,public Gunslinger
{
public:
    BadDude():Person(){}
    BadDude(const std::string &l,const char *f):Person(l,f){}
    BadDude(const Person &PP):Person(PP){}
    double Gdraw();
    int Cdraw();
    void Show();
    void Set();
};
#endif