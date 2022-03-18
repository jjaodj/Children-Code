#include <iostream>
using namespace std;

int isSquareNumber(int a){
    if(a<1)
        return 0;
    int i=1;
    while(i*i<=a){
        if(i*i==a)
            return 1;
        i++;
        }
    return 0;
}
int main() {
    int dem=0;
    for (int i = 1; i<=1000;i++)
        if(isSquareNumber(i)==1 && i%2==1) dem++;
    cout<<dem<<endl;
    dem=0;
    for (int i=1; i<=1000;i++)
if (i%2==1) dem++;
cout<<dem<<endl;
    
    return 0;
}