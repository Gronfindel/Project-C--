#include<iostream>
using namespace std;
const int strsize=32;
struct  bop
{
    char fullname[strsize]; //реальное имя 
    char title[strsize]; //должность
    char bopname[strsize]; // секретное имя БОП
    int preference; //0=полное имя, 1=титул, 2=имя БОП.
};
void Choise()
{
    cout<<"Benevolent Order of Programmers Report.\n"
            "a)display by name\nb)display by title\n"
            "c)display by bopname\nd)display by prefence\nq)quit\n";
}
int main()
{   
    const int size=5;
    char choise;
    bop members[size] =
    {   {"Wimp Macho", "Junior Programmer", "Floppy",0},
        {"Raki Rhodes", "Analist Trainee", "Felix",1},
        {"Celia Laiter", "MIPS", "Combat helicopter",2},
        {"Hoppy Hipman", "Junior Programmer", "Bulldozer",1},
        {"Pat Hand", "Administrator", "NEO",0}
    };
    Choise();
    cout<<"Enter your choice:";cin>>choise;
    while(choise!='q'&&choise!='Q')
    {
        switch (choise)
        {
        case 'a':
        case 'A':for (short i = 0; i < size; i++)
                    cout<<members[i].fullname<<endl;
            break;
        case 'b':
        case 'B':for (short i = 0; i < size; i++)
                    cout << members[i].title << endl;
            break;
        case 'C':
        case 'c':for (short i = 0; i < size; i++)
                    cout << members[i].bopname << endl;
            break;
        case 'd':
        case 'D':for (short i = 0; i < size; i++)
                    {
                        if (members[i].preference==0)
                            cout << members[i].fullname<<endl; 
                        else if (members[i].preference == 1)
                            cout << members[i].title<<endl;
                        else if (members[i].preference == 2)
                            cout<<members[i].bopname<<endl;
                    }        
            break;
        }
        cout << "Enter your choice:";
        cin>>choise;
    }
    cout<<"bye!\n";
    return 0;
}