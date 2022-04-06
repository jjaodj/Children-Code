#include <iostream>
using namespace std;

class phanso
{
        int tu,mau;

    public:
        phanso(int tu, int mau);
        ~phanso();

        int nhaptu();
        int nhapmau();

        void caitu(int tu);
        void caimau(int mau);

        void inphanso();
        float dinhphanso();

        phanso cong(phanso b);
        phanso tru(phanso b);
        phanso nhan(phanso b);
        phanso chia(phanso b);

};

phanso::phanso(int tu, int mau)
{
    this->tu=tu;
    if(mau==0)
    {
        this->mau=1;
        return;
    }
    this->mau=mau;
}

phanso::~phanso(){}

int phanso::nhaptu()
{
    return tu;
}

int phanso::nhapmau()
{
    return mau;
}

void phanso::caitu(int tu)
{
    this->tu=tu;
}

void phanso::caimau(int mau)
{
    if(mau==0)
    {
        this->mau=1;
        return;
    }
    this->mau=mau;
}

void phanso::inphanso()
{
    cout<<tu<<"/"<<mau<<endl;
}

float phanso::dinhphanso()
{
    float temp=tu;
    return temp/mau;
}

phanso phanso::cong(phanso b)
{
    int temptu = this->tu * b.nhapmau() + b.nhaptu() * this->mau;
    int tempmau =  this->mau *b.nhapmau();
    phanso temp(temptu,tempmau);
    return temp;
}

phanso phanso::tru(phanso b)
{
    int temptu = this->tu * b.nhapmau() - b.nhaptu() * this->mau;
    int tempmau =  this->mau *b.nhapmau();
    phanso temp(temptu,tempmau);
    return temp;
}

phanso phanso::nhan(phanso b)
{
    int temptu = this->tu *b.nhaptu();
    int tempmau =  this->mau *b.nhapmau();
    phanso temp(temptu,tempmau);
    return temp;
}

phanso phanso::chia(phanso b)
{
    int temptu = this->tu *b.nhapmau();
    int tempmau =  this->mau *b.nhaptu();
    phanso temp(temptu,tempmau);
    return temp;
}

int main()
{
    phanso a(2,3);
    phanso b(2,3);
    phanso c=a.cong(b);
    c.inphanso();
    return 0;
}