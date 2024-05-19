#include<iostream>
using namespace std;

void rotate(int array[], int n, int k){
    int array2[20];
    for(int i=0; i<n; i++){
        array2[(i+k)%n] = array[i];
    }
    for(int i =0; i<n; i++){
        array2[i] = array[i];
    }
}

int main(){
    int array[5]={1,3,5,7,9};
    int k=2;
    rotate(array, 5, k);
    cout<<"rotated array: ";
    for(int i =0; i<5; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
