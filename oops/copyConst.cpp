#include<iostream>
using namespace std;

class Hero{

    private:
    int health;
    
    public:
    char *name;
    char level;

    Hero(){
        cout<<"simple simple constructor called "<< endl;
        name = new char[100];
    }

    void setName(char name[]){
        strcpy(this -> name, name);
    }



}

int main(){

    return 0;
}