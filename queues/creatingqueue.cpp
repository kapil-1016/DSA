#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(4);
    cout<<"front of queue: "<<q.front()<<endl;
    
    q.push(5);
    cout<<"front of queue: "<<q.front()<<endl;
    
    q.push(33);
    cout<<"front of queue: "<<q.front()<<endl;
    
    q.pop();
    q.pop();
    q.pop();
    cout<<"size of queue is: "<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"q isnt empty"<<endl;
    }
     
    return 0;
}