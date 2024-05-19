#include<iostream>
#include<deque>
using namespace std;
int main(){
   deque<int> d;
   d.push_back(6969);
   d.push_front(69);
//    for(int i:d){
//     cout<<i<<" ";
//    }
//     d.pop_back();
//     d.pop_front();
//     cout<<endl;
//     for(int i: d){
//         cout<<i<<" ";
//     }
//     cout<<"first element: "<<d.at(1)<<endl;
d.clear();
cout<<"empty or not: "<<d.empty();
    return 0;
}

/*In a deque, elements can be added or removed from the front or the back, providing more 
flexibility compared to a regular queue or stack.*/