#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    string FileName ="mat.dat";
    ifstream MattFile(FileName);
    vector<string> Matt;
    if (MattFile.is_open())
    {
        string str;
        while (std::getline(MattFile, str))
            Matt.push_back(str);
        if (EOF)
            MattFile.close();
    }
    else 
        cerr<<"Error opening file: "<<FileName<<endl;
    FileName ="pat.dat";
    ifstream PatFile(FileName);
    vector<string> Pat;
    if (PatFile.is_open())
    {
        string str;
        while (std::getline(PatFile, str))
            Pat.push_back(str);
        if (EOF)
            PatFile.close();
    }
    else 
        cerr<<"Error opening file: "<<FileName<<endl;
    sort(Matt.begin(),Matt.end());sort(Pat.begin(),Pat.end());
    for(string str:Matt)
        cout<<str<<endl;  
    for(string str:Pat)
        cout<<str<<endl;
    set<string>General; 
    set_union(Matt.begin(),Matt.end(),Pat.begin(),Pat.end(),inserter(General,General.begin()));
    FileName ="MattPat.dat";
    ofstream outFile(FileName); 
    if (outFile.is_open())
    {
        for (string str:General)
            outFile<<str<<endl;
    }
    else 
        cerr<<"Error opening file: "<<FileName<<endl;
        return 0;
}