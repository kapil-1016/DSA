#include<iostream>
using namespace std;

int binarySearch(int array[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(array[mid] == key){
            return mid;
        }
        if(array[mid]<key){
            start = mid + 1;
        }
        if(array[mid]>key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,5,7,9,10};
    int odd[5] = {1,3,5,6,9};

    int evenIndex = binarySearch(even, 6, 10);
    int oddIndex = binarySearch(odd, 5, 3);

    cout<<"Index of 10 is: "<<evenIndex<<endl;
    cout<<"Index of 3 is: "<<oddIndex<<endl;

    return 0;

}