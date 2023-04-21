#include<iostream>
#include<cstring>
int main()
{   
    using namespace std;
    int SummWord=0;
    cout<<"Вводите слова через enter (для завершения введите слово done):"<<endl;
    string word,exit;
    exit={"done"};
    do
    {
        getline(cin,word);
        ++SummWord;
    } while (word!=exit);
    cout<<"Вы ввели "<<SummWord<<" слов";
    return 0;
}