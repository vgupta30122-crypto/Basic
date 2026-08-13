// #include <iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s ="abcdefgh";
//     // s.sunstr(idx,length)
//     cout<<s.substr(2,2);  // output cd means 2nd idx to 2 ch(2 element) hi rhega 
// }



 //another q 
 #include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string s ="abcdefgh";
    // // s.sunstr(idx,length)   
    string str ;
    cout<<" enter a string ";
    cin>>str;
    int n =str.length();
     //  a b c d e f g h  >>>> len 16
    cout<<str.substr(n/2);   
}
//  enter a string abcdefghij
// fghij

