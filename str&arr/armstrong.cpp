#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cout<<"enter number: ";
    cin>>n;
    int temp = n;
    int sum = 0;
    int dcount = 0;
    while(temp>0){
        temp = temp/10;
        dcount++;
    } 
    temp = n;
    while(temp>0){
        int last = temp%10;
        sum = sum+ pow(last,dcount);
        temp = temp/10;
    }
    if(sum ==n){
        cout<<"armstrong";
    }
    else{
        cout<<"not an armstrong number.";
    }

    return 0;
}