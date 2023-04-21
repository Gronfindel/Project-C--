#include"SixthTack.cpp"
int main()
{
    Move m1(10.5,15.2);
    Move m2(20.32,30.4);
    m1.showmove();m2.showmove();
    m1.add(m2);m2.add(m1);
    m1.showmove();m2.showmove();
    m1.reset();m2.reset();
    m1.showmove();m2.showmove();
    return 0;
}