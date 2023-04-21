#include<iostream>
const int ArSize=10;
using namespace std;
void strcount(const string str)
{
    static int total=0;
    int count =0;
    cout<<"\""<<str<<"\" contains ";
    for (int i = 0; i < str.length(); i++)
        count++;
    total+=count;
    cout<<count<<" characters\n";
    cout<<total<<" characters total\n";
}
int main()
{
    string input;;
    cout<<"Enter a line: \n";
    getline(cin,input);
    while(input!="")
    {
        strcount(input);
        cout<<"Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout<<"Bye\n";
    return 0;
}