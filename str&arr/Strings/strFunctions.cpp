#include<bits/stdc++.h>
using namespace std;

int main(){
     string str = "krishna";
    reverse(str.begin(), str.end());
    // time complexity of reverse function --> O(length of the string)
    cout<<str<<endl;
     cout<<str.substr(1,3)<<endl;
     cout<<str.substr(2)<<endl;

   string str1 = "krishna";
   string str2 = "kapil ";
   cout<<str1+str2<<endl;

    char s1[20] = "krishna";
    char s2[20] = "kapil";
    strcat(s1,s2);
    cout<<s1 << endl;
    cout<<strlen(s1);

    string str3 ="krishn";
    cout<<str3<<endl;
    str3.push_back('a');
    cout<<str3;

   cout<< str3.size()<<endl;
   cout<< str3.length()<<endl;

   int num = 432;
   string str4 = to_string(num);
    str4 += "1";
    cout<<str4;
    return 0;
}