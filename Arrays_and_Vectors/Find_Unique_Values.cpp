#include <iostream>
using namespace std;

void printUnique(int arr[], int n){
    for(int i=0; i<n; i++){
        int unique=true;
        for(int j=0; j<i; j++){
            if(arr[j]==arr[i]) {
                unique=false;
                break;
            }
        }
        if(unique) cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printUnique(arr, n);

    return 0;
}
