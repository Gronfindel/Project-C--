#include <iostream>
#include<stdexcept>
// class bad_hmean
// {
// private:
//     double v1;
//     double v2;
// public:
//     bad_hmean(double a=0,double b=0):v1(a),v2(b){}
//     void mesg();
// };
// inline void bad_hmean::mesg()
// {
//     std::cout<<"hmean("<<v1<<", "<<v2<<"): "<<"invalid arguments: a=-b\n";
// }
// class bad_gmean
// {
// public:
//     double v1;
//     double v2;
//     bad_gmean(double a=0,double b=0):v1(a),v2(b){}
//     const char *mesg();
// };
// inline const char *bad_gmean::mesg()
// {
//     return "gmean() arguments should be >=0\n";
// }
class bad_hmean:public::std::logic_error
{
public:
    bad_hmean():logic_error{"A logical error has occurred"}{}
    const char* what();
};
const char* bad_hmean::what()
{
    return "An error occurred in the function hmean\n";
}
class bad_gmean:public::std::logic_error
{
public:
    bad_gmean():logic_error{"A logical error has occurred"}{}
    const char* what();
};
const char* bad_gmean::what()
{
    return "An error occurred in the function gmean\n";
}
