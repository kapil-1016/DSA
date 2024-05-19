#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int reverse(char array[], int n){
    int s = 0; 
    int e = n-1;
    while(s<=e){
        swap(array[s++],array[e--]);
    }
}

int main(){
    char name[20];

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"your name is: ";
    cout<<name<<endl;  

    int len = getLength(name);
    cout<<"length: "<< getLength(name)<<endl;

 reverse(name, len);
 cout<<"reversed: "<<name<<endl;

    return 0;
}