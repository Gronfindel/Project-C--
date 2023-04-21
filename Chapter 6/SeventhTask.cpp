#include<iostream>
#include<cctype>
int main()
{
    using namespace std;
    string word;
    int consonants,vowels,other;
    consonants=vowels=other=0;
    char VowelsLitter[]={'A','E','I','O','U','Y','a','e','i','o','u','y'};
    cout<<"Enter words (q to quit):\n";cin>>word;
    while (word!="q"&&word!="Q")
    {
        if (isalpha(word[0]))
        {
            int i=0;
            while (VowelsLitter[i]!=word[0]&&i<12)
                i++;
            if (VowelsLitter[i]==word[0])
                vowels++;
            else consonants++;
        }
        else other++;
        cin >> word;
    }
    cout<<vowels<<" words beginning with vowels.\n";
    cout<<consonants<<" words beginning with consonants.\n";
    cout<<other<<" others.";
    return 0;
}