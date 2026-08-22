#include <bits/stdc++.h>
using namespace std;
//top down
//recursion
int fib(int n, vector<int> &m){
    if(n<=1) return n;
    if(m[n]!=-1) return m[n];
    return m[n]=fib(n-1, m)+fib(n-2, m);
}
int main() {
	int n=6;
	vector<int> m(n+1, -1);
	cout<<fib(n, m);
    return 0;
}
