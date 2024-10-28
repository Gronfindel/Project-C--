#include<iostream>
class Cpmv 
{ 
public: 
	struct Info
	{ 
		std::string qcode; 
		std::string zcode; 
	}; 
private: 
	Info* pi; 
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv (const Cpmv & cp);
	Cpmv (Cpmv && mv);
	~Cpmv(){delete pi;};
	Cpmv & operator = (const Cpmv & cp);
	Cpmv & operator = (Cpmv && mv);
	Cpmv operator+ (const Cpmv & obj) const;
	void Display() const;
};
Cpmv::Cpmv()
{
	pi=new Info;
	std::cout<<"New object, address this object: "<<pi<<std::endl;
}
Cpmv::Cpmv(std::string q,std::string z)
{
	pi=new Info;
	pi->qcode=q;
	pi->zcode=z;
	std::cout<<"New object with q z, address this object: "<<pi<<std::endl;
}
Cpmv::Cpmv(const Cpmv &cp)
{
	pi= new Info;
	pi->qcode=cp.pi->qcode;
	pi->zcode=cp.pi->zcode;
	std::cout<<"New object created by copying, address this object: "<<pi<<std::endl;
}
Cpmv::Cpmv(Cpmv &&mv)
{
	pi=new Info;
	pi=mv.pi;
	mv.pi=nullptr;
	std::cout<<"New object created by moving, address this object: "<<pi<<std::endl;
}
Cpmv & Cpmv::operator= (const Cpmv & cp)
{
	if (this==&cp)
		return *this;
	delete pi;
	pi=new Info;
	pi->qcode=cp.pi->qcode;
	pi->zcode=cp.pi->zcode;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return *this;
}
Cpmv &Cpmv::operator=(Cpmv &&mv)
{
	if (this==&mv)
		return *this;
	pi=mv.pi;
	mv.pi=nullptr;
	std::cout<<"Move assignment operator called,address this object: "<<pi<<std::endl;
	return *this;
}
Cpmv Cpmv::operator+ (const Cpmv &obj)const
{
	std::cout<<"Addition operator called"<<std::endl;
	Cpmv temp;
	temp.pi->qcode=pi->qcode+obj.pi->qcode;
	temp.pi->zcode=pi->zcode+obj.pi->zcode;
	return temp;
}
void Cpmv::Display() const
{
	if(pi==nullptr)
		std::cout<<"Object not found!"<<std::endl;
	std::cout<<"pi->qcode: "<<pi->qcode<<"\npi->zcode: "<<pi->zcode<<std::endl;
}
int main()
{
	Cpmv firs;
	Cpmv second("olivia","denis");
	Cpmv third(second);	
	Cpmv fourth(firs+third);
	firs=third;
	Cpmv five("dikiy","fire");
	fourth=five+second;
	third=std::move(third);
	return 0;
}