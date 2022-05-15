#include<iostream>
using namespace std;
struct CandyBar
{
    const char *candyName;
    double weight;
    int kcal;
};
void showSweets(const CandyBar & Sweets)
{
    cout<<"Name: "<<Sweets.candyName<<endl;
    cout<<"Weight: "<<Sweets.weight<<endl;
    cout<<"Calories: "<<Sweets.kcal<<endl;
}
void installSweets(CandyBar & Sweets,
                    const char * candyName="Millennium Munch",
                    double weight=2.85,
                    int kcal=350)
{
    Sweets.candyName=candyName;
    Sweets.weight=weight;
    Sweets.kcal=kcal;
}
int main()
{
    CandyBar Sweet;
    CandyBar Sweet1;
    CandyBar Sweet2;
    installSweets(Sweet);
    showSweets(Sweet);
    installSweets(Sweet1, "Mars", 3.0, 400);
    showSweets(Sweet1);
    installSweets(Sweet2, "Bounty", 0.55, 490);
    showSweets(Sweet2);
    return 0;
}
