#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return ;
    cout<<n;
    zigzag(n-1);
    cout<<n;
   zigzag(n-1);
    cout<<n;
}
int main(){
    int n;
     cout<<"enter the no of n:";
    cin>>n;
    zigzag(n);
}
// hw done 
// enter the no of n:1
// 111
// enter the no of n:4
// 432111211123211121112343211121112321112111234