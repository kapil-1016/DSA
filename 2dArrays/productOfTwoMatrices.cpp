#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int arr2[3][3];
    int product[3][3];

    cout<<"Enter your first matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enter your second matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"First matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Second matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            product[i][j] = arr[i][j] * arr2[i][j];
        }
    }

     cout<<"Product matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<product[i][j]<<"\t";
        }
        cout<<endl;
    }

}