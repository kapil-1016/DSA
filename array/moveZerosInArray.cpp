#include<iostream>
using namespace std;

void mvZros(int array[], int n){
    int i = 0;
    for(int j=0; j<n; j++){
        if(array[j]!=0){
            swap(array[j],array[i]);
            i++;
        }
       
    }
}

int main(){
    int array[5] = {0,69,96,0,0};
    int n = sizeof(array)/sizeof(array[0]);
    mvZros(array, 5);
    cout<<"new array: ";
    for(int i =0; i<n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}