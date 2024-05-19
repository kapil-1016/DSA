#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero(){
        cout<<"constructor called."<<endl;
    }

    // Parameterised Constructor
    Hero(int health){
        cout<<"-> this: "<< this <<endl;
        this -> health = health;
    }

};
int main(){
    cout<<"hye"<<endl;
 Hero ramesh(10);
 cout<<"address of ramesh: "<< &ramesh <<endl;
 cout<<"hello"<<endl;//  dynamically
Hero *h = new Hero;
    return 0;
}