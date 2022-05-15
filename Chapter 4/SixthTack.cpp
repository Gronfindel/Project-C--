#include <iostream>
using namespace std;
struct CandyBar
{
    string name;
    float volume;
    int ccal;
};
int main()
{
    CandyBar snack[3]=
    {
        {"Mars",0.5,230},
        {"Mocha Munch",2.5,350},
        {"Snickers",50.5,495}
    };
    cout<<"Значание для 1-й структуры: "<<snack[0].name<<" "<<snack[0].volume<<" "<<snack[0].ccal<<endl;
    cout << "Значание для 2-й структуры: " << snack[1].name << " " << snack[1].volume << " " << snack[1].ccal << endl;
    cout << "Значание для 3-й структуры: " << snack[2].name << " " << snack[2].volume << " " << snack[2].ccal << endl;
    return 0;
}