#include <iostream>
#include<stdexcept>
class exc_mean:public std::logic_error
{
private:
    double v1,v2;
public:
    exc_mean(double a=0,double b=0):v1(a),v2(b),logic_error{"A logical error has occurred"}{}
    virtual void show_arguments()
    {
        std::cout<<"Argument v1="<<v1<<std::endl;
        std::cout<<"Argument v2="<<v2<<std::endl;
    }
};
class bad_hmean:public exc_mean
{
public:
    bad_hmean(double a,double b):exc_mean(a,b){}
    void show_arguments()
    {
        exc_mean::show_arguments();
        std::cout<<"An error occurred in the function hmean\n";
    }
};
class bad_gmean:public exc_mean
{
public:
    bad_gmean(double a,double b):exc_mean(a,b){}
    void show_arguments()
    {
        exc_mean::show_arguments();
        std::cout<<"An error occurred in the function gmean\n";
    }
};
