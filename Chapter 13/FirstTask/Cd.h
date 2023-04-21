#ifndef CD_H_
#define CD_H_
class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char *s1,char *s2,int n, double x);
    Cd(const Cd &d);//конструктор копирования по умолчанию
    Cd();
    void report()const;
    Cd & operator=(const Cd &d);
    ~Cd(){};
};
#endif