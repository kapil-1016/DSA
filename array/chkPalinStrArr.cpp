#include<iostream>
#include<cstring>
using namespace std;

char toLower(char ch){
  if(ch>='a' && ch<='z'){
    return ch;
  }
  else{
    char temp = ch-'A'+'a';
    return temp;
  }
}

bool checkPalindrome(char array[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
      if(toLower(array[s]) != toLower(array[e])){
        return 0;
      }
      else{
        s++;
        e--;
      }
    }
    return 1;
}

int main(){
  char name[20];

  cout<<"enter your string:";
  cin>>name;

  int len = strlen(name);
  cout<<"Is palindrome?: "<<checkPalindrome(name,len);
 

return 0;
}
