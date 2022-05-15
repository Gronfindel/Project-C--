#include<iostream>
#include<new>
#include<cstring>

using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};
const int BUF=50;
char buffer [BUF];
int main()
{
    const int arrSize=2;
    chaff * st= new (buffer) chaff[arrSize];
    char nameDross[20];
    int slagS=0;
    for (int i = 0; i < arrSize; i++)
    {
        cout<<"Enter name dross: ";cin>>nameDross;
        cout<<"Enter int slag:";cin>>slagS;
        strcpy(st[i].dross,nameDross);
        st[i].slag=slagS;
    }
    for (int i = 0; i < arrSize; i++)
    {
        cout<<"st № "<<i+1<<"\nName dross: "<<st[i].dross<<endl;
        cout<<"Int slag: "<<st[i].slag<<endl;
    }
    return 0;
}