#include <iostream>
//#include"golf.h"
#include "FirstTack9-1.cpp"
#include <cstring>
int main()
{
    golf ann;
    setgolf(ann, "Ann birdfree", 24);
    showgolf(ann);
    golf andy;
    setgolf(andy);
    using namespace std;
    int sizeArray;
    cout << "Enter the size of the structure array:";
    while (!(cin >> sizeArray) || (cin.peek() != '\n'))
    {
        cin.clear();
        cin.sync(); // while (cin.get() != '\n');
        cout << "Enter numerical value: ";
    }
    golf *golfer = new golf[sizeArray];
    int i = 0;
    while (i < sizeArray)
    {
        setgolf(golfer[i]);
        if (strlen(golfer[i].fullname) == 0)
            break;
        i++;
    }
    for (int k = 0; k < i; k++)
        showgolf(golfer[k]);
    return 0;
}
