#include <iostream>
using namespace std;

int main() {
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++) cout<<" ";
        cout<<"*";
    if(i!=0){
    for(int k=0; k<(2*i)-1; k++) cout<<" "; 
    cout<<"*";
    }    
        cout<<endl;
    }
    n=3;
    for(int i=0; i<n; i++){
        for(int k=0; k<i+1; k++) cout<<" ";
        cout<<"*";
        
        
    if(i!=2){
     for(int j=0; j<n-(2*i); j++) cout<<" ";
    cout<<"*";
    }    
        cout<<endl;
    }
    return 0;
}
