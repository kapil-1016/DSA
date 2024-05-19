#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n, int key){
    if(n == 0){
        return 0;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remaining = linearSearch(arr+1, n-1, key);
        return remaining;
    }
}

int main(){
    int arr[] = {2,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    bool ans = linearSearch(arr, n, key);
    if(ans){
        cout<<"key is present";
    }
    else{
        cout<<"key is absent";
    }
    return 0;
}