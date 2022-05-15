#include <iostream>
#include <array>
const int season=4;
struct Expenses
{
    double ExpArray[season];
};
void fill(const char *arr[], Expenses* Exp)
{
    using namespace std;
    for (short i = 0; i < season; i++)
    {
        cout << "Enter " << arr[i] << " expenses: ";
        cin >> Exp->ExpArray[i];
    }
}
void show(const char *arr[], Expenses Exp)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (short i = 0; i < season; i++)
    {
        cout << arr[i] << ": $" << Exp.ExpArray[i] << endl;
        total += Exp.ExpArray[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
int main()
{
    const char *Seasons[] = {"Spring", "Summer", "Fall", "Winter"};
    using namespace std;
    Expenses Exp;
    fill(Seasons, &Exp);
    show(Seasons, Exp);
    return 0;
}