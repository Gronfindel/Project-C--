#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
void ShowStr(const std::string &str)
{
    std::cout << str << std::endl;
}
class Store {
private:
    std::ofstream &outFile;
public:
    Store(std::ofstream &FileName) : outFile(FileName) {}
    void operator()(const std::string& str) {
        int len=str.size();
        outFile.write((char*)&len, sizeof(std::size_t));
        outFile.write(str.data(),len);
    }
};
void GetStrs (std::ifstream & f,std::vector<std::string> &istr)
{
    while (!f.eof())
    {
        uint len;
        f.read((char*)&len, sizeof(size_t));
        char *ch=new char[len];
        f.read(ch,len);
        istr.push_back(std::string(ch,len));
        delete[] ch;
    }
    
}
int main()
{
    using namespace std;
    vector<string> vostr;
    string temp;
    cout<<"Enter strings(empty line to quit):\n";
    while (getline(cin,temp)&&temp[0]!='\0')
         vostr.push_back(temp);
    cout<<"Here is you input.\n";
    for_each(vostr.begin(),vostr.end(),ShowStr);
    ofstream fout("string.dat",ios_base::out|ios_base::binary);
    for_each(vostr.begin(),vostr.end(),Store(fout));
    fout.close();
    vector<string> vistr;
    ifstream fin("string.dat",ios_base::in|ios_base::binary);
    if (!fin.is_open())
    {
        cerr<<"Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin,vistr);
    cout<<"\nHere are the strings read from the file:\n";
    for_each(vistr.begin(),vistr.end(),ShowStr);
    return 0;
}