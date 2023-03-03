#ifndef _STONEWT_H_
#define _STONEWT_H_
class Stonewt
{
private:
    enum{Lbs_per_stn=14};//фунтов на стоун
    int stone;//полных стоунов
    double pds_left;//дробное число стоунов
    double pounds;//общий вес в фунтах
public:
    Stonewt();
    Stonewt(double lbs);//конструктор для значения в фунтах
    Stonewt(int stn,double lbs);//конструктор для значения в стоунах и фунтах
    void show_lbs()const;//отображения веса в формате фунтов
    void show_stn()const;//отобржения веса в формате стоунов
    ~Stonewt();
};
#endif