// #include<iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int hcf(int a,int b){
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0) return i;
//     }
//     return 1;
// }
 
//  int main(){
//     int a=27;
//     int b=45;
//     cout<<hcf(a,b);
//  }
//  12

//9

// uqulid algorethem  recursion 
#include<iostream>
#include <string>
#include <vector>

using namespace std;
int hcf(int a,int b){
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int gcd (int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a;
      cout<<"enter a:";
    cin >>a;
  
    int b;
     cout<<"enter b:";
    cin >>b;
   
    cout<<gcd(a,b);
 }

 // 9


//  enter a:23
// enter b:45 
// 1