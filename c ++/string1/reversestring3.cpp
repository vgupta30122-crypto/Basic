#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    //  reverse the 2 to 5 th position 
    int n =str.length(); 
    reverse(str.begin()+1,str.begin()+5);
    cout<<str<<endl;
 }
//  vishal
// vahsil  reverse 2 to 5 index v ahsi l