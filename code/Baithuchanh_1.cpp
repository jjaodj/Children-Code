#include <iostream>
#include <cmath>
using namespace std;
#define max 100

//Tham_lam

/*(void xuly(int tien)
{
    int a=1,b=2,c=5,d=10;
    int dem_a=0,dem_b=0,dem_c=0,dem_d=0;
    if (tien%d < d && tien%d!=0)
    {
        dem_d=tien/d;
        tien%=d;
        if (tien%c <c && tien%c!=0)
        {
            dem_c=tien/c;
            tien%=c;
            if (tien%b==0)
                dem_b=tien/b;
            else 
            {
                dem_b=tien/b;
                tien%=b;
                dem_a=tien/a;
            }
        }else dem_c=tien/c;
    }
    else dem_d=tien/10;
    cout<<dem_d<<" xu 10, "<<dem_c<<" xu 5, "<<dem_b<<" xu 2, "<<dem_a<<" xu 1.";

}
int main()
{
    int tien;
    cin>>tien;
    xuly(tien);
    return 0;
})*/

//Day Fibo

/*(unsigned long Fibo(unsigned short N)
{
    unsigned long FN, FN1, FN2;
    FN = FN1 = FN2 = 1;
    for (unsigned short i=2; i<=N; i++)
    {
        FN = FN1 + FN2;
        FN1 = FN;
        FN2 = FN1;
    }
        return FN;
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibo(n)<<" "<<(1/sqrt(5))*(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n));
    return 0;
})*/

//BT2_chia_de_tri

/*(void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin>>a[i];
}
void sapxep(int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i], a[j]);
}
int find(int a[], int k, int left, int right) 
{
    if (left <= right) 
    {
        int middle = (left + right) / 2;
        if (k == a[middle])   
            return middle + 1;
        if (k > middle)    
            return find(a, k, middle + 1, right);
        if (k < middle)
            return find(a, k, left, middle - 1);
    }
return -1;
}
int main()
{
    int a[max], n, k;
    cin>>n>>k;
    nhap(a,n);
    sapxep(a,n);
    cout<<find(a,k,0,n+1);
    
    return 0;
})*/

//BT1_chia_de_tri

/*(int gcd(int a, int b)
{
    if (b == 0) return a;
    if (a%b==0) return b;
    return gcd(b, a % b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
})*/

//Vd_chia_de_tri

/*(double FastPower(double x, unsigned short n)
{
    if (!n) 
    return 1;
    double y = FastPower(x, n/2) * FastPower(x, n/2) ;
    if (n & 1)
        return x * y ;
    return y;
}
int main()
{
    double x,n;
    cin>>x>>n;
    cout<<FastPower(x,n);
    return 0;
})*/

//BT2_vetcan

/*(int snt(int n)
{
    int flag = 1;
    if (n <2) return flag = 0; 
    int i=2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; 
        }
        i++;
    }
    return flag;
}

int main()
{
    int n;
    cin>>n;
    for( int i = 1; i<=n; i++)
        if(snt(i)==1)
            cout<<i<<" ";
    return 0;
})*/

//BT1_vetcan

/*(void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin>>a[i];
}
bool check(int n)
{
    for(int i=0;;++i)
    {
        if(i*i == n)
            return true;
        if(i*i>n)
            return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[max];
    nhap(a,n);
    int maxx = 0;
    for(int i=0;i<n;++i)
    {
        if(check(a[i]))
        {
            if(maxx<a[i])
            maxx=a[i];
        }
    }
    cout << maxx;
    return 0;
})*/

//VD2_vetcan

/*(void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin>>a[i];
}
int indexMax( int a[],int n )
{
    int Max=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[Max])
        Max= i;
    }
    return Max;
}
int main()
{
    int n;
    int a[max];
    cin>>n;
    nhap(a,n);
    cout<<indexMax(a,n);
    return 0;
})*/


//VD1)_vetcan

/*(void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin>>a[i];
}
int exhaustiveSearch( int a[],int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        return i;
    }
    return -1;
}
int main()
{
    int x,n;
    int a[max];
    cin>>n;
    nhap(a,n);
    cin>>x;
    cout<<exhaustiveSearch(a,n,x);
    return 0;
})*/