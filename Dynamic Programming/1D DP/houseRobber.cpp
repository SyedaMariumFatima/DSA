#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> h={2, 7, 9, 3, 1};
    int prev2=h[0], prev1=h[1];
    int curr=max(prev1, prev2);
    for(int i=2; i<h.size(); i++){
        curr=max(prev1, prev2+h[i]);
        prev2=prev1;
        prev1=curr;
    }
    cout<<curr;
    return 0;
}
