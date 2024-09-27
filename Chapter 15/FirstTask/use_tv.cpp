#include<iostream>
#include"tv.cpp"
int main()
{
    using std::cout;
    tv s42;Remote grey;
    cout<<"Initial setting for 42\" TV:\n";
    grey.Show_remote(s42);
    s42.setting();
    s42.onoff();
    s42.chanup();
    cout<<"\nAdjusted setting for 42\" TV:\n";
    s42.setting();
    s42.Switch_remote(grey);
    grey.Show_remote(s42);
    grey.set_chan(s42,10);
    grey.volup(s42);
    grey.voldown(s42);
    cout<<"\n42\" setting after using remote: \n";
    s42.setting();
    s42.onoff();
    s42.Switch_remote(grey);
    tv s58(tv::on);
    s58.Switch_remote(grey);
    grey.Show_remote(s58);
    s58.set_mode();
    grey.set_chan(s58,28);
    cout<< "\n58\" settings:\n";
    s58.setting();
    return 0;
}