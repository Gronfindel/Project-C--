#ifndef _TV_H_
#define _TV_H_
class Remote;
class tv
{
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
public:
    friend class Remote;
    enum{off,on};
    enum{MinVol,MaxVol=20};
    enum{Antenna,Cable};
    enum{TV,DVD};
    tv(int s=off,int mc=125):state (s),volume(5),maxchannel(mc),channel(2),mode(Cable),input(TV){}
    void onoff(){state=(state==on)?off:on;}
    bool ison() const{return state ==on;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode(){mode=(mode==Antenna)?Cable:Antenna;}
    void set_input(){input=(input==TV)?DVD:TV;}
    void setting() const;
    void Switch_remote(Remote &r);
};

class Remote
{
private:
    enum{Normal,Interactiv};
    int mode;
    int mode_remote;
public:
    friend class tv; 
    Remote(int m=tv::TV):mode(m){}
    bool volup(tv &t){return t.volup();}
    bool voldown(tv &t){return t.voldown();}
    void onoff(tv &t){t.onoff();}
    void chanup(tv &t){t.chanup();}
    void chandown(tv &t){t.chandown();}
    void set_chan(tv &t, int c){t.channel=c;}
    void set_mode(tv &t){t.set_mode();}
    void set_input(tv &t){t.set_input();}
    void Show_remote(tv &t);
};
#endif