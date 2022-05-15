#include<iostream>
#include<array>
const int season=4;
void fill(const char* arr[], double mass[])
{
    using namespace std;
    for (short i = 0; i < season; i++)
    {
        cout<<"Enter "<<arr[i]<<" expenses: ";
        cin>>mass[i];
    }
}
void show(const char* arr[],const double mass[])
{
    using namespace std;
    double total= 0.0;
    cout<<"\nEXPENSES\n";
    for (short i = 0; i < season; i++)
    {
        cout<<arr[i]<<": $"<<mass[i]<<endl;
        total+=mass[i];
    }
    cout<<"Total Expenses: $"<<total<<endl;
}
int main()
{
    const char *Seasons[] = {"Spring", "Summer", "Fall", "Winter"};
    double expenses[season];
    using namespace std;
    fill(Seasons,expenses);
    show(Seasons,expenses);
    return 0;
}