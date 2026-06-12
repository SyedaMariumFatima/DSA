// given that nums are positive
#include <iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==2) return 1;
    return fib(n-1)+fib(n-2);
}

int main() {
    int n;
    cout<<"enter num: ";
    cin>>n;
    cout<<fib(n);
}
