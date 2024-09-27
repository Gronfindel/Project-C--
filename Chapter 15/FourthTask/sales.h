#include<stdexcept>
#include<string>
class sales
{
public:
    enum{MONTHS=12};
    class bad_index:public std::logic_error
    {
    private:
        int bi;
    public:
        explicit bad_index(int ix,const std::string &s="Index error in sales object\n");
        int bi_val() const {return bi;}
        virtual ~bad_index()throw(){}
    };
    explicit sales(int yy=0);
    sales(int yy,const double *gr, int n);
    virtual ~sales(){}
    int Year()const {return year;}
    virtual double operator[](int i) const;
    virtual double &operator[](int i);
private:
    double gross[MONTHS];
    int year;
};
class LabelesSales:public sales
{
public:
    class nbad_index:public sales::bad_index
    {
    private:
        std::string lbl;
    public:
        nbad_index(const std::string &lb,int ix,const std::string &s="Index error in labelSales object\n");
        const std::string &label_val() const {return lbl;}
        virtual ~nbad_index() throw(){}
    };
    explicit LabelesSales(const std::string &lb="non",int yy=0);
    LabelesSales(const std::string &lb, int yy,const double *gr,int n);
    virtual ~LabelesSales(){}
    const std::string &Label()const{ return label;}
    virtual double operator[](int i) const;
    virtual double &operator[](int i);
private:
    std::string label;
};

