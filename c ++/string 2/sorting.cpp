#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);//vishal and aanand 
   //   aaaaaddhilnnnsv 
    //cin>>str;
    sort(str.begin(),str.end());
    cout<<str;
}
// vishal
// ahilsv

// ye space print kiya then charecter ki ascci value ke according order me print kr rha hai 
// a b c d e f enki value 97 se start hoti hai 
// A B C D enki value 65 se start hoti hai so phle ye aayenge agr aisa input liya gya Name >>Naem 
