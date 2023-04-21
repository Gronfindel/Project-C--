#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char Word[20];
    int SummWord=0;
    cout<<"Вводите слова(для завершения введите слово done):"<<endl;
    cin>>Word;
    while(strcmp(Word,"done"))
    {
        cin>>Word;
        ++SummWord;
    }
    cout<<"Вы ввели "<<SummWord<<" слов.";
return 0;
}