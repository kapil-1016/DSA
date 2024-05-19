#include<bits/stdc++.h>
using namespace std;


int num(int n){
    if(n==0){
        return 1 ;
    }

    num(n-1);
    cout<<n<<endl;
   
  
}
int main(){
    
    cout<<endl;
    num(4);
    return 0;
}