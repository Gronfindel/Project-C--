#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<cctype>
using namespace std;
string & ToLower(string &st)
{
    transform(st.begin(),st.end(),st.begin(),::tolower);
    return st;
}
int main()
{
    vector<string>Matt;
    vector<string>Pat;
    cout<<"Enter Mat's friends(q to quit): ";
    string FriendName;
    while (getline(cin,FriendName)&&FriendName !="q" && FriendName != "Q")
        Matt.push_back(FriendName);
    cout<<"Mat's sorted guest list: "<<endl;
    for(string x:Matt)
        cout<<x<<endl;
    cout<<"Enter Pat's friends(q to quit): ";
    while (getline(cin,FriendName)&&FriendName !="q" && FriendName != "Q")
        Pat.push_back(FriendName);
    cout<<"Pat's sorted guest list: "<<endl;
    for(string x:Pat)
        cout<<x<<endl;
    cout<<"General quest list: "<<endl;
    set<string>General;
    transform(Pat.begin(),Pat.end(),insert_iterator<set<string>>(General,General.begin()),ToLower);
    transform(Matt.begin(),Matt.end(),insert_iterator<set<string>>(General,General.end()),ToLower);
    for (string i:General)
        cout<<i<<endl;
}