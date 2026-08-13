#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // reverse the half string 
    // string str ="abcdefgh"; 
    // cout<<str<<endl; 
    // reverse(str.begin()+4,str.end());
    // cout<<str<<endl;
//  abcdefgh
// abcdhgfe
 // reverse the  first half string
    string str;
    getline(cin,str);
    //  reverse the  first half string
    int n =str.length(); 
    reverse(str.begin(),str.begin()+n/2);
    cout<<str<<endl;
 }
//  vishal
// sivhal