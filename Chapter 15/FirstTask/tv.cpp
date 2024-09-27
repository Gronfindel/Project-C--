#include <iostream>
#include "tv.h"
bool tv::volup()
{
    if(volume<MaxVol)
    {
        volume++;
        return true;
    }
    else
    {
        return false;
    }
}
bool tv::voldown()
{
    if(volume<MaxVol)
    {
        volume--;
        return true;
    }
    else
    {
        return false;
    }
}
void tv::chanup()
{
    if (channel<maxchannel)
    {
        channel--;
    }
    else channel =1;
}
void tv::chandown()
{
    if (channel>1)
    {
        channel--;
    }
    else channel =maxchannel;
}
void tv::setting() const
{
    using std::cout;
    using std::endl;
    cout<<"TV is "<<(state ==off? "off":"on")<<endl;
    if(state ==on)
    {
        cout<<"Volume setting = "<<volume<<endl;
        cout<<"Channel setting = "<<channel<<endl;
        cout<<"Mode = "<<(mode==Antenna? "Antenna":"cable")<<endl;
        cout<<"Input = "<<(input==TV? "TV":"DVD")<<endl;
    }
}
void Remote::Show_remote(tv &t)
{
    using std::endl;
    using std::cout;
    if (t.state)
    {
        cout<<"Show remote mode: "<<(mode_remote==Normal?"Normal":"Interactiv")<<endl;
    }
    else
    {
        cout<<"Error, TV is turned off"<<endl;
    }
}
void tv::Switch_remote(Remote &r)
{
    using std::endl;
    using std::cout;
    if (state)
    {
        r.mode_remote=(r.mode_remote==r.Normal)?r.Interactiv:r.Normal;
    }
    else
    {
        cout<<"Error, TV is turned off"<<endl;
    }
}