#ifndef CD_H_
#define CD_H_
class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
    static int num_Cd;
public:
    Cd(char *s1,char *s2,int n, double x);
    Cd(const Cd &d);//конструктор копирования по умолчанию
    Cd();
    void report()const;
    Cd & operator=(const Cd &d);
    ~Cd(){delete [] performers;delete []label;--num_Cd;};
};
#endif