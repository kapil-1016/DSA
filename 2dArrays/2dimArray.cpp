#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int key, int i, int j){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == key){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[j][i];
    //     }
    // }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"Enter the element to search: ";
    cin>>key;
    if(isPresent(arr,key,3,3)){
        cout<<"Element is present."<<endl;
    }
    else{
        cout<<"Element not found.";
    };
    return 0;
} 