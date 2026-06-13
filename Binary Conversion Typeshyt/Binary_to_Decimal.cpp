#include <iostream>
using namespace std;

int binToDec(int bin){
    int dec=0, pow=1;
    while(bin>0){
        dec+=(bin%10)*pow;
        pow*=2;
        bin/=10;
    }
    return dec;
}
int main() {
    int bin;
    cout<<"Enter binary num:";
    cin>>bin;
    cout<<binToDec(bin);

    return 0;
}
