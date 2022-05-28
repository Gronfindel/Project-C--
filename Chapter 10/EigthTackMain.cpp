#include"EigthTack.cpp"
#include<iostream>
#include<cctype>
int main()
{
    using namespace std;
    List note;
    string records;
    int counter = 0;
    cout << "Create your first post: "; 
    while (!note.isfull() && getline(cin, records) && records != "q" && records != "Q")
    {
        cout <<"Enter the "<<counter+2<<"st entry in the sheet(q to quit): ";
        note.push(records);
        counter++;
    }
    note.show();
    return 0;
}