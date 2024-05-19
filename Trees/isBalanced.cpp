#include<bits/stdc++.h>
using namespace std;

int getHeight(vector<int>&arr, int index){
    if(index>=arr.size() || arr[index]==-1){
        return 0;
    }
    return 1 + max(getHeight(arr, 2*index+1), getHeight(arr, 2*index+2));
}

bool isBalancedUti(vector<int>&arr, int index){
    if(index>=arr.size() || arr[index] == -1){
        return true;
    }

    int left_height = getHeight(arr, 2*index+1);
    int right_height = getHeight(arr, 2*index+2);

    if(abs(left_height - right_height)>1){
        return false;
        }
    return isBalancedUti(arr, 2*index+1) && isBalancedUti(arr, 2*index+2);
}

bool isBalanced(vector<int>& arr){
    return isBalancedUti(arr, 0);
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(isBalanced(arr)){
        cout<<"tree is balanced";
    }
    else{
        cout<<"tree is not balanced";
    }
    return 0;
}