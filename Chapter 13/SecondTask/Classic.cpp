#include "Classic.h"
Classic::Classic()
{
    Cd();
    mainSong =new char[1];
    mainSong[0]='\n';
}
Classic::Classic(char *s1, char *s2, char *s3, int n, double x):Cd(s1,s2,n,x)
{
    mainSong=new char[strlen(s3)+1];
    strcpy(mainSong,s3);
}
Classic::Classic(const char *s1, const Cd &disk):Cd(disk)//Неявный конструктор копирования
{
    mainSong=new char[strlen(s1)+1];
    strcpy(mainSong,s1);
}
Classic &Classic::operator=(const Classic &d)
{
    if(this==&d)return *this;
    Cd::operator=(d);
    delete[] mainSong;
    mainSong=new char[strlen(d.mainSong)+1];
    strcpy(mainSong,d.mainSong);
    return *this;    
}
void Classic::report()
{
    Cd::report();
    std::cout<<"Main song: "<<mainSong<<std::endl;
}