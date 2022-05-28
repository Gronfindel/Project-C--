#include"FourthTack.cpp"
int main()
{
    double arr[SALES::QUARTES] = {258.34, 308.59, 150.698, 385.27};
    SALES::Sales s1(arr,SALES::QUARTES);
    s1.showSales();
    SALES::Sales s2;
    s2.setSales();
    s2.showSales();
    return 0;
}