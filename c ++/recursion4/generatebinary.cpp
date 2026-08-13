// #include<iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int n=4;// global variabal 
// void generate (string s){
//     if(s.length ()==n){
//         cout<<s<<endl;
//         return ;
//     }
//     generate(s+'0');
//      generate(s+'1');

// }
// int main(){
//     generate("");
// }

// 0000
// 0001
// 0010
// 0011
// 0100
// 0101
// 0110
// 0111
// 1000
// 1001
// 1010
// 1011
// 1100
// 1101
// 1110
// 1111

// did not any two ones togetther 1111  1101 1110 0011...
#include<iostream>
#include <string>
#include <vector>

using namespace std;
 
void generate (string s, int n){
    if(n==0){
        cout<<s<<endl;
        return ;
    }
    generate(s+'0',n-1);
     if(s=="" || s[s.length()-1]=='0') generate (s+'1',n-1);

}
int main(){
    int n=4;
    generate("",n);
}
// 0000
// 0001
// 0010
// 0100
// 0101
// 1000
// 1001
// 1010   // total 8 case bache ab