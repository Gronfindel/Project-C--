#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<"Enter the file name: ";
    string FileName;
    getline(cin,FileName);
    cout<<"Enter the text to be placed in the file: ";
    ofstream FileStream(FileName,ios::out|ios::ate);
    if(FileStream.is_open())
    {
        string str;
        while (getline(cin,str)&&EOF)
            FileStream<<str<<'\n';
    }
    else
        cerr<<"Error open this file!";
    FileStream.close();
    return 0;
}