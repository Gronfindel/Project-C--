/*Повторное использованеи кода*/
#include<string>
#include<valarray>
using namespace std;
/*Открытие наследование, отношение -ЯВЛЯЕТСЯ*/
//Базовый клас для клуба по настольному теннису
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hastable;
public:
    TableTennisPlayer(const string &fn="none",const string &ln ="none", bool ht = false);
    void Name()const;
    bool HasTable() const {return hastable;};
    void ResetTable(bool v){hastable=v;};
    ~TableTennisPlayer();
};
//Порожденный класс от базового класса TableTennisPlayer
class RatedPlayer:TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r=0,const string &fn ="none",const string &ln="none",bool ht=false);
    RatedPlayer(unsigned int r, const TableTennisPlayer &tp);
    unsigned int Rating() const{return rating;}
    void ResetRating(unsigned int r){rating=r;}
    ~RatedPlayer();
};
/* :указывает что TableTennisPlayer общедоступный базовый класс-это называется открытым порождением.
1) обьект производного типа хранит данные-члены базового типа
2) обьект производного типа может использовать методы базового типа*/
RatedPlayer::RatedPlayer(unsigned int r,const string &fn, const string &ln,bool ht):TableTennisPlayer(fn,ln,ht)
{
    rating=r;
}
/*Выражение :TableTennisPlayer(fn,ln,ht) является списком инициализаторов членов. Это исполняемый код, и он вызывает конструктор TableTennisPlayer*/
RatedPlayer::RatedPlayer(unsigned int r,const TableTennisPlayer &tp):TableTennisPlayer(tp)
{
    rating=r;
}
/*Вызывается конструктор копирования базового класса, если он неопределен вызывается конструктор по умолчанию.
Список инициализаторов членов может использоваться только в конструкторах*/

/*Полиморфное открытое наследование: ситуации в которых метод должен обладать разным поведением
в базовом и производном классе
1)переопределние методов базового класса в производном классе
2)использование виртуальных методов*/
/*Применение virtual: определяет какой метод используется если вызывается не обьектом а ссылкой или указателем.
Если метод обьявлен как виртуальный в базовом классе он автоматически становится виртуальным и в производном.
ПолиморфизмСпособ представления коллекции данных более чем одного типа в едином массиве.(Обращения через
указатели на базовый класс, к производному классу.) 
Базовый класс рекомендуется снабжать виртуальным деструктором, даже если необходимость в нем отсутствует*/

/*ВКЛЮЧЕНИЕ или КОМПОЗИЦИЯ или ИЕРАРХИЧЕСКОЕ ПРЕДСТАВЛЕНИЕ-использование членов класса, которые сами 
представляют собой обьекты других классов. Отношение СОДЕРЖИТ.
VALARRAY заголовочный файл valarray, valarray<тип> имя
методы valarray:
1) operator[]()-обеспечивает доступ к отдельным элементам
2) size()-возвращает количество элементов
3) sum()-возвращает сумму значений элементов
4) max()-возвращет максимальный элемент
5) min()-возвращает максимальный элемент*/

class Student
{
private:
    typedef std::valarray<double> ArrayDb;
    std::string name;
    ArrayDb scores;
public:
    Student():name("null student"),scores(){};
    explicit Student(const std::string &s):name(s),scores(){};
    explicit Student(int n):name("Nully"),scores(n){};
    Student(const std::string &s,int n):name(s),scores(n){};
    Student(const std::string &s,const ArrayDb &a):name(s),scores(a){};
    Student(const char *str,const double *pd,int n):name(str),scores(pd,n){};
    ~Student();
};
/*explicit отключает неявное преобразование. Без него станет возможным следующий код*/
Student dh("homer",10);//сохраняет "homer", создает массив из 10 элементов
dh=5;// сбрасывает имя в "Nully", а массив в пустой из 5 элементов
//explicit отключение неявного преобразования в конструкторах с одним аргументом

/*ЗАКРЫТОЕ НАСЛЕДОВАНИЕ*/
/*При использовании закрытого наследования открытые и защищенные  члены базового класса становятся закрытыми
членами производного класса-т.е. методы базового класса не переходят в открытый интерфейс производного обьекта.
Однако они могут использоваться внутри функций-членов производного класса*/
class Student:private std::string,private std::valarray<double>
{
private:
    typedef std::valarray<double> ArrayDb;
    std::ostream &arr_out(std::ostream &os)const;
public:
    Student(const char *str,const double *pd,int n):std::string(str),ArrayDb(pd,n){}
};
/*Наследование от нескольких базовых классов называется множественным наследованием*/

/*ЗАЩИЩЕНОЕ НАСЛЕДОВАНИЕ*/
/*-Это разновидность закрытого наследования, при обьявлении указывается ключевое слово protected
при защищенном наследовании открытые и защищенные члены базового класа становятся защищенными
членами производного класса.*/
class Student:protected std::string,protected std::valarray<double>{};
/*Главное отличие между защищенным и закрытым наследованием.
При закрытом наследовании класс третьего поколения не получает доступа к интфейсу базовых классов.
При защищенном наследовании открытые методы базового класса становятся защищенными членами производного класса
и доступны внутри классов следующего уровня наследования.
Обьявление using делает методы доступными как будто это открытые методы.*/

/*МНОЖЕСТВЕННОЕ НАСЛЕДОВАНИЕ*/
/*Виртуальные базовые классы позволяют обьекту, порожденному от нескольких базовых классов, которые сами 
имеют  общий базовый класс, наследовать только один обьект от этого базового класса. */
class Worker{};
class Singer:virtual public Worker{};
class Waiter:public virtual Worker{};//virtual and public монжно использовать в любом порядке
class SingerWaiter:public Singer,public Waiter{};
/*SingerWaiter будет содержать одну копию обьекта Waiter*/