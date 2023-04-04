#include"stack.cpp"
#include"iostream"
int main()
{
    using namespace std;
    unsigned long max=10;
    stack st1;
    stack st2(st1);
    st1=st2;
    if (st1.isempty())
    {
        cout<<"S1.isempty"<<endl;
    }
    st1.push(20);st2.push(25);
    st1.push(33);st2.push(124);
    st1.push(28);st2.push(69);
    st1.pop(max);
    return 0;
}