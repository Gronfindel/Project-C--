#include"ThirdTack.cpp"
#include<iostream>
int main()
{
    Golf ann=Golf("Ann birdfree", 24);
    ann.showGolf();
    Golf andy;
    andy.setGolf();
    andy.showGolf();
    using namespace std;
    int sizeArray;cin.clear();
    cout<< "Enter the size of the structure array:";
    while (!(cin >> sizeArray) || (cin.peek() != '\n'))
    {
        cin.clear();
        cin.sync();
        cout << "Enter numerical value: ";
    }
    Golf golfer[sizeArray];
    int i = 0;
    while (i < sizeArray)
    {
        if (golfer[i].setGolf() == 0)
            break;
        i++;
    }
    for (int k = 0; k < i; k++)
        golfer[k].showGolf();
    return 0;
}