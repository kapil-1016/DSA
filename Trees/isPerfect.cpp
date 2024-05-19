#include<bits/stdc++.h>
using namespace std;

bool isPerfect(vector<int>&arr){
    int n = arr.size();
    int height = log2(n+1);
    int expectednodes = pow(2,height)-1;

    return n==expectednodes;
    
    }

    int main(){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        if(isPerfect(arr)){
            cout<<"tree is perfect!";
        }
        else{
            cout<<"tree isn't perfect!";
        }
        return 0;
    }