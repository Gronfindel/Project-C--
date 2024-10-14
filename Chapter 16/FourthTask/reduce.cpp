#include <iostream>
#include <set>
#include <ctime>

using namespace std;
int reduce(long ar[], int n) {
    set<long>vekt(ar, ar + n);
    return vekt.size();
}
int main() {
    srand(time(0));
    cout<<"Enter full size array: ";
    int x; cin>>x;
    long mass[x];
    for (long x: mass)
        x=rand();
    cout << reduce(mass, x)<<endl;
}
