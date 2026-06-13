#include <iostream>
using namespace std;

int bin(int num){
    int b=0, pow=1, d;
    while(num>0){
        d=num%2;
        b+=d*pow;
        pow*=10;
        num/=2;
    }
    return b;
}
int main() {
    int num;
    cout<<"Enter num:";
    cin>>num;
    cout<<bin(num);

    return 0;
}
