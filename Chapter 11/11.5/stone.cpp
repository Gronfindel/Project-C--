#include"iostream"
#include"stonewt.h"
#include "stonewt.cpp"
int main()
{
    using namespace std;
    Stonewt First(100.33,2);
    Stonewt second(30,75,3);
    cout <<"Output after initialization:\n"<<"First "<<First<<"Second "<<second;
    First.SetMode(1);second.SetMode(1);
    cout << "Output after changing output format:\n"<< "First " << First << "Second " << second;
    cout << "Output after addition(First + second): " << First + second;
    cout << "Output after subtraction(First - second): " << First - second;
    cout << "Output after division(First * second): " << First * second;
    return 0;
}