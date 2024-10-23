#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    cout<<"Enter the file name: ";
    string FileName,FileName2;
    getline(cin,FileName);
    cout<<"Enter the name where to copy the file: ";
    getline(cin,FileName2);
    ifstream inFile(FileName, ios::binary);
    ofstream outFile(FileName2, ios::binary);
    if (inFile.is_open()&&EOF)
    {
        if (outFile.is_open())
        {
            outFile<<inFile.rdbuf();
            outFile.close();
        }
        else   
            cerr<<"Failed to open output file: " <<FileName<<endl;
        inFile.close();  
    }
    else    
        cerr<<"Error opening the file from which to copy: " <<FileName2<<endl;
    

}