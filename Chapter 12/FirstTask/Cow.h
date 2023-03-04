class Cow
{
private:
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();
    Cow(const char *m,const char *ho,double wt);
    Cow(const Cow &c);
    ~Cow(){delete[]hobby;};
    Cow &operator=(const Cow &c);
    void ShowCow()const;
};