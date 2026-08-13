// #include<iostream>
// using namespace std;
// int pow (int x,int n){
//     if(n==0) return 1;
//     return x*pow(x,n-1);
     
// }
// int main(){
//     int x;
//     cout<<"enter the power of x:";
//     cin>>x;
//     int n;
//     cout<<"enter the base of n:";
//     cin>>n;
    
//     cout<<pow(x,n);
// }
// 16
// enter the power of x:3
// enter the base of n:4
// 81
#include<iostream>
using namespace std;
int pow (int x,int n){
    if(n==0) return 1;
    int ans=pow(x,n/2);
    if(n%2==0){
         return ans*ans;
    }
    else{
          return ans*ans*x;
    }
    
    return ans*ans;
     
}
int main(){
    int x;
    cout<<"enter the power of x:";
    cin>>x;
    int n;
    cout<<"enter the base of n:";
    cin>>n;
    
    cout<<pow(x,n);
}
// enter the power of x:3
// enter the base of n:4
// 81
// enter the power of x:3
// enter the base of n:6
// 729
// enter the power of x:4
// enter the base of n:3
// 64