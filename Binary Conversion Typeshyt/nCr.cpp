#include <iostream>
using namespace std;
int fact(int a){
    if(a==2) return 2;
    return a*fact(a-1);
}
int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main() {
    int n, r;
    cout<<"enter n and r: ";
    cin>>n>>r;
    cout<<ncr(n,r);
}
