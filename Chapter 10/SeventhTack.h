#ifndef SeventhTack_h
#define SeventhTack_h
class Plorg
{
private:
    char name[19];
    int CI;
public:
    Plorg();
    Plorg(const char *Name,int ci);
    void changes();
    void showPlorg();
    ~Plorg();
};
#endif