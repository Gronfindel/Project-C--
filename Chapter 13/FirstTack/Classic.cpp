#include "Classic.h"
Classic::Classic()
{
    Cd();
    mainSong[0]='\n';
}
Classic::Classic(char *s1, char *s2, char *s3, int n, double x):Cd(s1,s2,n,x)
{
    strcpy(mainSong,s3);
}
Classic::Classic(const char *s1, const Cd &disk):Cd(disk)//Неявный конструктор копирования
{
    strcpy(mainSong,s1);
}
void Classic::report()
{
    Cd::report();
    std::cout<<"Main song: "<<mainSong<<std::endl;
}