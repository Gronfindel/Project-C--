#include<iostream>
#include<cctype>
int main()
{
    using namespace std;
    char ch;
    cout<<"Введите любую букву: ";cin.get(ch);
    while (ch!='@')
    {
        if (ch!=tolower(ch))
            ch = tolower(ch);    
        else
            ch=toupper(ch);
        cout<<ch;
        cin.get(ch);
    }   
    return 0;
}