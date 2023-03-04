#include"iostream"
#include"Cow.cpp"
int main()
{
    Cow c("Berta","Sparrow shooting",732);
    Cow b("Zelda","Treasure hunt",579);
    Cow d(b);
    c.ShowCow();b.ShowCow();d.ShowCow();
    d=c;d.ShowCow();
    return 0;

}