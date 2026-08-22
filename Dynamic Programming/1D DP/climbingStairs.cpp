#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=8;
	int curr, p=2, pp=1;
	for(int i=3; i<n; i++){
	    curr=p+pp;
	    pp=p;
	    p=curr;
	}
	cout<<curr;
    return 0;
}
