// #include<iostream>
// #include<cmath>
// using namespace std;
// bool isprime(int n){
//     if(n==1 ) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false ;
//     }
//     return  true ;
// }
// int main(){
//     cout<<isprime(47);

// }
// 0  false
// 1   47 ke liye
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1 ) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false ;
    }
    return  true ;
}
void printfactors(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout<<i<<" " ;
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" " ;
    }
}
int main(){
    printfactors(60);

}
// 1 2 3 4 5 6 60 30 20 15 12 10  
// 1 2 3 4 5 6 10 12 15 20 30 60   reverse loop se 
