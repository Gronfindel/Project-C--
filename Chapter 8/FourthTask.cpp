#include<iostream>
using namespace std;
#include<cstring>
struct stringy{char * str;int ct;};
void show(const char *stri,int value=1)
{
    for(int i=0;i<value;i++)
        cout<<stri<<endl;
}
void show(const stringy & box, int value=1)
{
    for (int i = 0; i < value; i++)
        cout<<box.str<<endl;
}
void set(stringy & box, char *stri)
{
    box.ct=strlen(stri);
    char *s=new char[box.ct+1];
    strcpy(box.str,stri);
}
int main()
{
    stringy beany;
    char testing[]="Reality isn't what it used to be.";
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
    return 0;
}