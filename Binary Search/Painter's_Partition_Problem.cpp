#include <iostream>
using namespace std;
bool valid(int b[], int n, int m, int mid){
    int p=1, u=0;
    for(int i=0; i<n; i++){
        if(u+b[i]<=mid) u+=b[i];
        else{
            p++;
            u=b[i];
        }
    }
    return p>m?false:true;
}

int minTime(int b[], int n, int m){
    int s=INT_MIN, e=0, mid, ans;
    //if(m>n) return-1;
    for(int i=0; i<n; i++) {
        e+=b[i];
        s=max(s, b[i]);
    }
    while(s<=e){
        mid=s+(e-s)/2;
        if(valid(b,n,m,mid)){
            e=mid-1;
            ans=mid;
        }else s=mid+1;
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int b[n];
    for(int i; i<b; i++) cin>>b[i];
    int m;
    cin>>s;
    cout<<minTime(b,n,m);
    return 0;
}
