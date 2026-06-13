#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int n){
    int min_i=0, max_i=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[max_i]) max_i=i;
        if(arr[i]<arr[min_i]) min_i=i;
    }
    swap(arr[min_i], arr[max_i]);
}
int main() {
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    swapMaxMin(arr, n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}
