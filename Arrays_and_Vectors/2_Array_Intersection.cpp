#include <iostream>
using namespace std;
void printIntersection(int arr1[], int arr2[], int n, int m){
    int res[n]; int count=0; bool unique=true;;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            if(arr1[i]==arr2[j]){ 
                for(int k=0; k<count; k++) {
                    if(res[k]==arr1[i]) {
                    unique=false;
                    break;
                    }
                }
                if(unique)res[count++]=arr1[i];
                break;
            }
        }
       
    }
    for(int i=0; i<count; i++) cout<<res[i]<<" ";
}
int main() {
    int n, m;
    cout<<"Enter size of array1: ";
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++) cin>>arr1[i];
    
    cout<<"Enter size of array2: ";
    cin>>m;
    int arr2[m];
    for(int i=0; i<n; i++) cin>>arr2[i];
    printIntersection(arr1, arr2, n, m);
    return 0;
}
