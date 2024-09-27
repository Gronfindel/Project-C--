#include<iostream>
#include<string>
using namespace std;
bool palindrome(string &str)
{
    string str2;
    str2=str;
    int y=str.size()-1;
    for(char &c:str)
    {
        if (c==str2[y])
        {
            y--;
            continue;
        }
        else
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    string str;
    cout<<"Enter word and q to quit: ";
    while (cin>>str&&str[0]!='q')
    {
        if (palindrome(str))
            cout<<str<<" is a palindrome"<<endl;
        else cout<<str<<" is not a palindrome"<<endl;
        cout<<"Next try: ";
    }
    cout<<"Buy!";
    
}