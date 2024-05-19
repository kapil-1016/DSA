#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int>arr, int x){
    int res_s, res_e;
    int diff = INT_MAX;
    int n = arr.size();
    int s=0, e=n-1;
    while(s<e){
        if(abs(arr[s]+arr[e]-x)<diff){
            res_e = e;
            res_s = s;
            diff = abs(arr[s]+arr[e]-x);
        }
        if(arr[s]+arr[e]>x){
            e--;
        }
        else{
            s++;
        }
    }
    return{arr[res_s],arr[res_e]};
}

int main(){
    vector<int> arr = {3,5,6,7,8,28};
    int x = 40;
    pair<int,int> result = closestSum(arr,x);
    cout<<result.first<<","<<result.second;
    return 0;
}