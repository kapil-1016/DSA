#include<bits/stdc++.h> 
using namespace std; 

int lowerBound(vector<int> A, int Val) { 
int sz = A.size(); 
    int s = 0, e = (sz-1); 
    int answer = -1; 
    while (s <= e) { 
        int mid = (s + e) / 2; 
        if (A[mid] > Val) { 
            e = mid-1; 
        } 
        else { 
            answer = A[mid]; 
            s = mid+1; 
        } 
    } 
    return answer;   
} 
int main(){
    vector<int> A = {3,5,7,9,11};
    int result = lowerBound(A, 2);
    cout<<result;
    return 0;
}