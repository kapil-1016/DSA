#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;
    cout<<"first: "<<v.front()<<endl;
    cout<<"last: "<< v.back()<<endl;
    v.pop_back();
    cout<<"last"<<v.back()<<endl;
    v.clear();
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
    
}