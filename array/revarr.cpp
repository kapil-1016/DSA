#include<iostream>
using namespace std;

void revArr(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    int n;
    int arr[100];
    cout<<"Enter num of elements you want in your array: ";
    cin>>n;
    cout<<endl;

    for(int k=0; k<n; k++){
        cin>>arr[k];
      
    }

    cout<<"Your array is: ";

    for(int m=0; m<n; m++){
        cout<<arr[m]<<" ";
    }
    cout<<endl;
    cout<<"reversed array: ";

    revArr(arr,n);

      for(int m=0; m<n; m++){
        cout<<arr[m]<<" ";
    }

    return 0;

}