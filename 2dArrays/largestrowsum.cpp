#include<iostream>
#include<limits.h>
using namespace std;

int largestRowSum(int arr[][3], int i, int j){
    int maxi = INT_MIN; 
    int rowIndex = -1;

    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"the maiximum sum is: "<<maxi<<endl;
    return rowIndex;
}

int main(){
    int array[3][3] = {1,2,3,4,5,6,7,8,9};
    int ans =largestRowSum(array,3,3);
    cout<<"max sum row index->"<<ans;
    return 0;
}