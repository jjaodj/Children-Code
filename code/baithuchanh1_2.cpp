#include <iostream>

using namespace std;

int xuly(int n,int m,int a[])
{
if(n == 0)
return 1;
if(n<0)
return 0;
if(m<=0 && n>0)
return 0;
return xuly(n,m-1,a)+xuly(n-a[m-1],m,a);
}

int main()
{
int n,m;
cin >> n >> m;
int a[m];
for(int i=0;i<m;++i)
cin >> a[i];
cout << xuly(n,m,a);
return 0;
}