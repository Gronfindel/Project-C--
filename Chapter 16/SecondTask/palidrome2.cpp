#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool palindrome(string &str)
{
    string str2,str3;
    int y=-1;
    for(char &c:str)
    {
        if (isalpha(c))
        {
            y++;
            str2+=tolower(c);
        }
    }
    str3=str2;
    for(char &c:str3)
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
    while (std::getline(cin,str)&&str[0]!='q')
    {
        if (palindrome(str))
            cout<<str<<" is a palindrome"<<endl;
        else cout<<str<<" is not a palindrome"<<endl;
        cout<<"Next try: ";
    }
    cout<<"Buy!";
    
}