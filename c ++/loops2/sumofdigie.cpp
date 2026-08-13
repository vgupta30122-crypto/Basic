#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int sum=0,ld=0;
    while(n>0){
     ld=n%10;
     sum=sum+ld;
     n=n/10;
    }
   cout<<sum;
 }
// enter a number: 123456
// 21