#ifndef ThirdTack_H
#define ThirdTack_h
class Golf
{
private:
    static const int len=40;
    char fullname[len];
    int handicap;

public:
    Golf(const char *fullName="none",int hp=0);
    int setGolf();
    void showGolf();
    ~Golf();
};
#endif