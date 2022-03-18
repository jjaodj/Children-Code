#include <iostream>
using namespace std;
int prime(int x) {
    for (int i = 0; i <=x;i++)
        if(i*i==x) return 1;
    return 0;
}
int main() {
    int cout=0;
    for (int i = 1; i<=1000;i++)
        if(prime(i)==1) cout++;
    cout<<cout;
    return 0;
}