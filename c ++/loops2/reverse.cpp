#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int r=0,ld=0;
    while(n>0){
        r=r*10;
     ld=(n%10);
     r=r+ld;
     n=n/10;
    }
   cout<<"reverse number is:"<<r;
}
// enter a number: 1234
// reverse number is:4321