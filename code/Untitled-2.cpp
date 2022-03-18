#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
int snt(int n)
{
    int kq=1;
    if (n<2) return kq=0;
    for (int i=2; i<sqrt(n); i++)
    {
        if (n%i==0) 
        {
            kq=0;
            break;
        }
    }
    return kq;
}
int mang(int a[], int n)
{
    int kq=1;
    for (int i=0;i<n/2;i++)
    {
        if (a[i]!=a[n-i-1])
        {
            kq=0;
            break;
        }
    }
    return kq;
}
int ucln(int a,int b)
{
    if (a==0) return b;
    if (b%a==0) return a;
    return ucln(b,a%b);
}
int main()
{ 
    int a[]={1,2,3,2,1};
    cout<<68%54;
    return 0;
}