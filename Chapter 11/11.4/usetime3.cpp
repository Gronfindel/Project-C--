#include "iostream"
// #include "mytime3.h"
#include "mytime3.cpp"
int main()
{
    using std::cout;
    using std::endl;
    Time aida(3,35);
    Time tosca(2,48);
    cout<<"Aida and Tosca:\n"<<aida<<"; "<<tosca<<endl;
    Time temp;
    temp=aida+tosca;
    cout<<"Aida + Tosca: "<<temp<<endl;
    temp=aida-tosca;
    cout<<"Aida - Tosca: "<<temp<<endl;
    temp=aida*1.17;
    cout<<"Aida * 1.17: "<<temp<<endl;
    cout<<"10.0 * Tosca: "<<10.0*tosca<<endl;
    return 0;
}