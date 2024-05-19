#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int, 4> basic = {1,2,3,5};
    int size = basic.size();
    for(int i=0; i<size; i++){
        cout<<basic[i]<<" ";
    }
    cout<<endl;
    cout<<"First Element: "<<basic.at(0)<<endl;
    cout<<"Last Element: "<<basic.at(3)<<endl;
    cout<<"first element: "<<basic.front()<<endl;
    cout<<"last element: "<< basic.back()<<endl;
    return 0;
}