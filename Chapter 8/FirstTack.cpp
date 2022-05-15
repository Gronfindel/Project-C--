#include<iostream>
using namespace std;
int count=0;
void show (string &str, int j=0)
{   
    if(j!=0)  
        for (int i = 0; i < count; i++)
            cout<<str<<endl;
    else cout<<str;
    count++;
}
int main()
{
    string word="Game over\n";
    show(word);
    word="New game\n";
    show(word);
    word="Press to begin\n";
    show(word,3);
    return 0;
}