#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"enter num: ";
    cin>>n;
    
    vector<bool> isPrime(n+1, true);
    for(int i=2; i*i<=n; i++){
        if(isPrime[i]!=false){
            for(int j=i*i; j<=n; j+=i) isPrime[j]=false;
        }
    }
    
    vector<int> res;
    for(int i=2; i<=n; i++) {
        if(isPrime[i]){ 
        res.push_back(i);
        cout<<i<<" ";
        }
    }
}
