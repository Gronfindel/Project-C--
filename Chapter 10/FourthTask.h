#ifndef FourthTack_h
#define FourthTack_h
namespace SALES
{   
    const int QUARTES=4;
    class Sales
    {
    private:
        double sales[QUARTES];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(double arr[],int arrSize);
        void setSales();
        void showSales();
        ~Sales();
    };
}
#endif