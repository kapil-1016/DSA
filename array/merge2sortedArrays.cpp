#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int array[]){
    int i=0, j=0, k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            array[k]=arr1[i];
             i++;
        k++;
        }
        else{
            array[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<n){
        array[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        array[k]=arr2[j];
        k++;
        j++;
    }
}

void print(int array[], int n){
    for(int i=0; i<n; i++){
    cout<<array[i]<<" ";
    }
}

int main(){
    int arr1[4]={10,20,30,40};
    int arr2[6]={05,15,25,35,45,55};
    int array[10];
    merge(arr1, 4, arr2, 6, array);
    cout<<"Merged and sorted array: ";
    print(array, 10);
    return 0;
}