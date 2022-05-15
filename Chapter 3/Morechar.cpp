#include<iostream>
int main()
{
    using namespace std;
    char ch='@';//присваивает ch код ASCII символа M
    int i =ch;//сохраняет этот же код в int
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;
    cout<<"Add one to the character code:"<<endl; 
    ch=ch+1;// изменяет кот символа в ch
    i=ch;// сохраняет код нового символа в i
    cout<<"The ASCII code for:"<<ch<<" is "<<i<<endl;// использование функции-члена cout.put() для отображения символа 
    cout<<"Displaying char ch using cout.put(ch):";cout.put(ch);// использование cout.put() для отопбражения символьной константы 
    cout.put('!');
    cout<<endl<<"Done"<<endl;
    return 0;
}