#include <iostream>
using namespace std;
//a+bi

class sophuc
{
    int x,y;

    public:
    sophuc(int x,int y);
    ~sophuc();

    int nhapx();
    int nhapy();

    void caix(int x);
    void caiy(int y);

    void insophuc();

    sophuc cong(sophuc b);
    sophuc tru(sophuc b);
    sophuc nhan(sophuc b);
    sophuc chia(sophuc b);
};

sophuc::sophuc(int x, int y)
{
    this->x=x;
    this->y=y;
}
sophuc::~sophuc(){}

void sophuc::insophuc()
{
    cout<<x<<"+"<<y<<"i"<<endl;
}

int sophuc::nhapx()
{
    return x;
}

int sophuc::nhapy()
{
    return y;
}

void sophuc::caix(int x)
{
    this->x=x;
}

void sophuc::caiy(int y)
{
    this->y=y;
}

sophuc sophuc::cong(sophuc b)
{
    int tempx = this->x + b.nhapx();
    int tempy = this->y + b.nhapy();
    sophuc temp(tempx,tempy);
    return temp;
}

sophuc sophuc::tru(sophuc b)
{
    int tempx = this->x - b.nhapx();
    int tempy = this->y - b.nhapy();
    sophuc temp(tempx,tempy);
    return temp;
}

sophuc sophuc::nhan(sophuc b)
{
    int tempx = this->x * b.nhapx() - this->y * b.nhapy();
    int tempy = this->x * b.nhapy() + this->y * b.nhapx(); 
    sophuc temp(tempx,tempy);
    return temp;
}

sophuc sophuc::chia(sophuc b)
{
    int tempx = (this->x * b.nhapx() + this->y * b.nhapy())/(b.nhapx()*b.nhapx()+b.nhapy()*b.nhapy());
    int tempy = (this->x * b.nhapy() + this->y * b.nhapx())/(b.nhapx()*b.nhapx()+b.nhapy()*b.nhapy());
    sophuc temp(tempx,tempy);
    return temp;
}

int main()
{
    sophuc a(2,3);
    sophuc b(2,3);
    sophuc c=a.chia(b);
    c.insophuc();
    return 0;
}

