#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>
#include <fstream>
using namespace std;
vector<string> str;
ifstream inFile;
string FileName;
int main()
{
    srand(time(0));
    cout<<"Enter file name:";getline(cin,FileName);
    inFile.open(FileName);
    if (!inFile.is_open())
    {
        cout<<"Could not open the file "<<FileName<<endl;
        cout<<"Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    string st;
    while (inFile.good()&&inFile>>st)
        str.push_back(st);
    // for (string c:str)
    //     cout<<c<<endl;
    char play;
    cout<<"Will you play a word game? <y/n>";
    cin>>play;
    play=tolower(play);
    while (play=='y')
    {
        string target=str[rand() % str.size()];
        int length =target.length();
        string attempt(length,'-');
        string badchars;
        int guesses=6;
        cout<<"Guess my secret word. It has "<<length
            <<" letters, and you guess\n"
            <<"one letter at time. You get "<<guesses
            <<"wrong guesses.\n";
        cout<<"Your word: "<<attempt<<endl;
        while (guesses>0 && attempt!=target)
        {
            char letter;
            cout<<"Guess a letter: ";
            cin>>letter;
            if(badchars.find(letter)!=string::npos||attempt.find(letter)!= string::npos)
            {
                cout<<"You already guessed that. Try again.\n";
                continue;
            }
            int loc=target.find(letter);
            if (loc==string::npos)
            {
                cout<<"Oh, bad guess!\n";
                --guesses;
                badchars+=letter;
            }
            else
            {
                cout<<"Good guess!\n";
                attempt[loc]=letter;
                loc=target.find(letter,loc+1);
                while (loc!=string::npos)
                {
                    attempt[loc]=letter;
                    loc=target.find(letter,loc+1);
                }
                
            }
            cout<<"Your word: "<<attempt<<endl;
            if (attempt!=target)
            {
                if (badchars.length()>0)
                    cout<<"Bad choices: "<<badchars<<endl;
                cout<<guesses<<" bad guesses left\n";             
            }       
        }
        if (guesses>0)
            cout<<"That's right!\n";
        else
            cout<<"Sorry< the word is "<<target<<".\n";
        cout<<"Will you play another? <y/n>";
        cin>>play;
        play=tolower(play);
    }
    cout<<"Bue\n";
    return 0;
}