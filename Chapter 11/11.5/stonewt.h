#ifndef _STONEWT_H_
#define _STONEWT_H_
class Stonewt
{
    
private:
    enum{Lbs_per_stn=14};//фунтов на стоун
    int stone;//полных стоунов
    double pds_left;//дробное число стоунов
    double dPounds;//общий вес в фунтах с плавающей точкой
    int iPounds;// общий вес в фунтах
    enum Mode {stonew,pound,doublePounds};
    Mode mode;
public:
    Stonewt();
    Stonewt(double lbs,int i);//конструктор для значения в фунтах
    Stonewt(int stn,double lbs,int i);//конструктор для значения в стоунах и фунтах
    void SetMode(int i);
    friend std::ostream &operator<<(std::ostream &os,const Stonewt &s);
    Stonewt operator+(Stonewt &s)const;
    Stonewt operator-(Stonewt &s) const;
    Stonewt operator*(Stonewt &s) const;
    Stonewt operator/(Stonewt &s) const;
    // void show_lbs()const;//отображения веса в формате фунтов
    // void show_stn()const;//отобржения веса в формате стоунов
    ~Stonewt();
};
#endif