#include<iostream>
using namespace std;
int findPivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int main(){
    int array[7] = {17,19,22,23,1,2,3};
    cout<<"Pivot is at index "<<findPivot(array,7);
    return 0; 
}