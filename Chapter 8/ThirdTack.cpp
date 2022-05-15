#include<iostream>
#include<cctype>
using namespace std;
string topline(string word)
{
    string newWord;
    for (int i = 0; i < word.length(); i++)
    {
        newWord+=(char)toupper(word[i]);
    }
    return newWord;
}
int main()
{
    string str;
    cout<<"Enter a string (q to quit):";
    while(getline(cin,str)&&str!="q"&&str!="Q")
    {
        cout<<topline(str)<<endl;
        cout << "Next string (q to quit):";
    }
    cout<<"Bye!";
    return 0;
}