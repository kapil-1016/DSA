#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    bool swapped;
    for(int i=0; i<n; i++){
        swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
            if(swapped == false){
                break;
            
        }
    }
}

int main(){
    int arr[] = {55,22,11,69,909,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/* 
Use case: In ith round the ith largest element got placed correctly.
*/

// time complexity = O(n^2) & constant space complexity i.e O(1).

 