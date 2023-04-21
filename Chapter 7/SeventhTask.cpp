#include <iostream>
const int Max = 5;
double* fill_array(double* begin, double* end);
void show_array(double* begin, double* end);
void revalue(double r, double* begin, double* end);
int main()
{
    using namespace std;
    double properties[Max];
    double* end = fill_array(properties, properties+Max);
    show_array(properties,end);
    if (end > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    cin.get();
    return 0;
}
double* fill_array(double *begin,double *end)
{
    using namespace std;
    double temp;
    int i;
    double *pt;
    for (pt=begin;pt!=end;pt++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *pt=temp;i++;
    }
    return pt;
}
void show_array(double *begin, double *end)
{
    using namespace std;
    int i = 0;
    for (double* pt = begin; pt!=end; pt++)
    {
        cout << "Property #" << i + 1 << ": $";
        cout << *pt << endl;i++;
    }
}
void revalue(double r, double *begin, double *end)
{
    for (double *pt = begin; pt != end; pt++)
        (*pt) *= r;
}