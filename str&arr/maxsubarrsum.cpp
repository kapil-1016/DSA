// KADANE'S ALGORITHM

#include<bits/stdc++.h>
using namespace std;

int kadanes(vector<int>num){
    int sum = 0;
    int maxi = num[0];
    for(int i=0; i<num.size(); i++){
        sum = sum+num[i];
        maxi = max(maxi, sum);
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = kadanes(nums);
    cout<<result;
    return 0;
}