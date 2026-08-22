#include <bits/stdc++.h>
using namespace std;
//bottom up
//loop
int fib(int n){
    int curr, prev=1, prevprev=0;
    for(int i=2; i<=n; i++){
        curr=prev+prevprev;
        prevprev=prev;
        prev=curr;
    }
    return curr;
}
int main() {
	int n=6;
	cout<<fib(n);
    return 0;
}
