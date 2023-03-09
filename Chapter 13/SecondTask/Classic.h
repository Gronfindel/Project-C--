#include"Cd.h"
#include<iostream>
#include"string.h"
class Classic:public Cd
{
    private:
        char *mainSong;
    public:
        Classic();
        Classic(char *s1, char *s2, char *s3, int n, double x);
        Classic(const char *s1,const Cd &disk);
        void report();
        Classic &operator=(const Classic &disk);
        ~Classic(){delete []mainSong;};
};

