#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    // creation of object.
    Hero ramesh;
    ramesh.setHealth(7);
    cout<<"Ramesh's Health is: "<< ramesh.getHealth()<<endl;
    // ramesh.health = 70;
    ramesh.level = 'A';

//    cout<<"health is:" <<ramesh.health << endl;
   cout<<"level is:" <<ramesh.level <<endl; 
   cout<<"size of ramesh: "<<sizeof(ramesh)<<endl; 
    return 0;
}