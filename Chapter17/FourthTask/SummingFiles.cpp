#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<"Enter the first file name: ";
    string FileName,FileName2,FileName3;
    getline(cin,FileName);
    cout<<"Enter the second file name: ";
    getline(cin,FileName2);
    cout<<"Enter the output file name: ";
    getline(cin,FileName3);
    ifstream inFile(FileName);
    ifstream inFile2(FileName2);
    ofstream outFile(FileName3);
    if (inFile2.is_open()&&inFile.is_open())
    {
        if (outFile.is_open())
        {
            while (!inFile.eof() || !inFile2.eof())
            {
                static string str;
                if(!inFile.eof())
                {
                    getline(inFile,str);
                    outFile<<str<<' ';
                }
                if (!inFile2.eof())
                {
                    getline(inFile2,str);
                    outFile<<str<<endl;
                }
            }
            outFile.close();     
        }
        else
            cout<<"Failed to open output file"<<endl;
        inFile2.close();inFile.close();
    }
    else
        cerr<<"One of the input files was open"<<endl;
    
}