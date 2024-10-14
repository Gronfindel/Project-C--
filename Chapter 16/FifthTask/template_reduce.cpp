#include <iostream>
#include <set>
template <class T>
int reduce(T arr[], int n) {
    std::set<T> vekt(arr, arr + n);
    return vekt.size();
}
using namespace std;
int main() {
    int arr[10]={10,23,4,5,1,2,5,8,9,2};
    cout << reduce(arr, 10)<<endl;
    string str []={"name","date","collum","potato","carrot", "ice scream nice"};
    cout << reduce(str, sizeof(str) / sizeof(string))<<endl;
}
