#include<iostream>
using namespace std;

void rowisesum(int arr[3][3], int i, int j ){
   
    for(int i=0; i<3; i++){
         int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// void colwisesum(int arr[3][3], int i, int j ){
   
//     for(int j=0; j<3; j++){
//          int sum = 0;
//         for(int i=0; i<3; i++){
//             sum += arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }

int main(){
    int array[3][3];
    cout<<"Enter elements of your matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>array[i][j];
        }
    }
    cout<<"Sum->";
    rowisesum(array,3,3);
    // colwisesum(array,3,3);
    return 0;
}