#include <iostream>
using namespace std;
bool valid(int p[], int n, int m, int mid){
    int stu=1, pg=0;
    for(int i=0; i<n; i++){
        if(pg+p[i]<=mid) pg+=p[i];
        else{
            stu++;
            pg=0;
        }
    }
    return stu>m?false:true;
}

int minMaxAlloc(int p[], int n, int stu){
    int s=0, e=0, m, ans;
    if(stu>n) return-1;
    for(int i=0; i<n; i++) e+=p[i];
    while(s<=e){
        m=s+(e-s)/2;
        if(valid(p,n,stu,m)){
            e=m-1;
            ans=m;
        }else s=m+1;
    }
    return ans;
}
int main() {
    int b;
    cin>>b;
    int p[b];
    for(int i; i<b; i++) cin>>p[i];
    int s;
    cin>>s;
    cout<<minMaxAlloc(p,b,s);
    return 0;
}
