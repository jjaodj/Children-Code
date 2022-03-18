#include <iostream>
using namespace std;
void nhap(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cin>>a[i];
}
void tich(float a[], int n) 
{
    int kq,vol=1;
    for (int i=0;i<n;i++) 
    {
        vol=max(a[i],vol*a[i]);
        kq=max(kq,vol);
    }
    cout<<"Tich lon nhat la "<<kq<<"\n";
}
void phantu(float a[], int n) 
{
    int kq,vol=1;
    int start=0,end=0,start1=0;
    for (int i=0;i<n;i++) 
    {
        if (vol+a[i] < a[i]) 
        {
            start1=i;
            vol=a[i];
        } 
        else 
            vol+=a[i];

        if (kq<vol) 
        {
            kq=vol;
            start=start1;
            end=i;
        }
    }
    cout<<"Phan tu thu "<<start +1<< " to "<<end+1;
}
int main() 
{
    int n;
    cin>>n;
    float a[n];
    nhap(a,n);
    tich(a,n);
    phantu(a,n);
    return 0;
}