#include<iostream>
using namespace std;

void selectionSort(int array[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(array[j]<array[minIndex])
            minIndex=j;
        }     
        swap(array[minIndex],array[i]);
    }
}

int main(){
    int arr[4] = {2,66,69,44};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"sorted array: ";
    selectionSort(arr,4);
    for(int m =0; m<n; m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}
// space complexity = O(n), time complexity = O(n^2)
// best case --> array is already been sorted, in both best and worth case time complexity will be same.
// use case --> best for small sized array.  