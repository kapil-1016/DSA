#include<iostream>
using namespace std;

int arrsum(int *arr, int n, int index){
    if(index == n){
        return 0;
    }
    else{
        return arr[index] + arrsum(arr, n, index+1);
    }
}

int main(){
    int arr[] = {1,2,3,5};
    int n = 4;
    int ans = arrsum(arr, 4, 0);
    cout<<"sum: "<<ans;
    return 0;    
}
