#include<cstring>
#include"string2.h"
#include<cctype>
using std::cin;
using std::cout;
//Инициализация статического члена класса 
int String::num_strings=0;
//Статический метод
int String::HowMany(){return num_strings;}
//Методы класса
String::String(const char *s)
{
    len=std::strlen(s);
    str=new char [len+1];
    std::strcpy(str,s);
    num_strings++;
}
String::String()
{
    len=4;
    str=new char [1];
    str[0]='\0';
    num_strings++;
}
String::String(const String &st)
{
    num_strings++;
    len=st.len;
    str=new char[len+1];
    std::strcpy(str,st.str);
}
String::~String()
{
    --num_strings;
    delete[]str;
}
//Методы перегруженных функций
String &String::operator=(const String &st)
{
    if(this==&st)return *this;
    //str = new char[10];
    delete[] str;
    len=st.len;
    str=new char[len+1];
    std::strcpy(str,st.str);
    return *this;
}
String &String::operator=(const char *s)
{
    delete[]str;
    len=std::strlen(s);
    str=new char[len+1];
    std::strcpy(str,s);
    return *this;
}
//Доступ для чтения и записи в некотором неконстанктном обьекте String
char &String::operator[](int i)
{
    return str[i];
}
const char &String::operator[](int i)const
{
    return str[i];
}
//Дружественные функции перегруженных операций
bool operator<(const String &st1,const String &st2)
{
    return(std::strcmp(st1.str,st2.str)<0);
}
bool operator>(const String &st1,const String &st2)
{
    return st2.str<st1.str;
}
bool operator==(const String &st1,const String &st2)
{
    return(std::strcmp(st1.str,st2.str)==0);
}
String operator+(const String &st1,const String &st2)
{
    String s3;
    delete[] s3.str;
    s3.len=st1.len+st2.len;
    s3.str=new char[st1.len+st2.len+1];
    strcat(strcpy(s3.str,st1.str),st2.str);
    return s3;
}
String operator+(const char *s, const String &st)
{
    String st1;
    delete[] st1.str;
    st1.len=strlen(s)+st.len+1;
    st1.str=new char[strlen(s)+1+st.len];
    strcat(strcpy(st1.str,s),st.str);
    return st1;
}
//простой вывод String
ostream &operator<<(ostream &os,const String &st)
{
    os<<st.str;
    return os;
}
istream &operator>>(istream &is,String &st)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is) st=temp;
    while (is&&is.get()!='\n')continue;
    return is;
}
void String::stringlow()
{
    for (int i = 0; i < strlen(str); i++) str[i]=tolower(str[i]);
}
void String::stringup()
{
    for (int i = 0; i < strlen(str); i++) str[i]=toupper(str[i]);
}
int String::has(const char s)
{
    int result=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==s)result++;
    }
    return result;
}