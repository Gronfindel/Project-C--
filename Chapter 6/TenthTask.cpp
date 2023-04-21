#include<iostream>
#include<fstream>
#include<cctype>
struct Maecenas
{
    std::string MaecenasName;
    double donations;
};
int main()
{
    using namespace std;
    string FileName;
    ifstream inFile;
    cout << "Enter file name:";getline(cin, FileName);
    inFile.open(FileName);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << FileName << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    int m;
    inFile>>m;
    int i = 0;
    Maecenas *Sponsors = new Maecenas[m];
    int GreatPatrons, Patrons;
    GreatPatrons = Patrons = 0;
    while (inFile.good())
    {
        inFile.get();
        getline(inFile, Sponsors[i].MaecenasName);
        inFile >> Sponsors[i].donations;
        if (Sponsors[i].donations >= 10000)
            GreatPatrons++;
        else
            Patrons++;
        i++;
    }
    cout << "Great Patrons:\n";
    if (GreatPatrons > 0)
    {
        for (short i = 0; i < m; i++)
        {
            if (Sponsors[i].donations >= 10000)
                cout << Sponsors[i].MaecenasName << endl;
        }
    }
    else
        cout << "none\n";
    cout << "Patrons:\n";
    if (Patrons > 0)
    {
        for (short i = 0; i < m; i++)
        {
            if (Sponsors[i].donations <= 10000)
                cout << Sponsors[i].MaecenasName << endl;
        }
    }
    else
        cout << "none\n";
    delete[] Sponsors;
    return 0;
}