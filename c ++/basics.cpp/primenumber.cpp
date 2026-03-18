#include<iostream>
using namespace std;
int main(){
    int n ,a=0;
    cout<<"enter the value of n =";
    cin>>n;
    for(int i=2; i<=n-1;i++){
        if (n%i==0){
            a =1;
            break;
        }
    }
    if (n==1) { 
    cout<<"1 is neither prime nor composite\n";
    }
    else if(a==0) {
    cout<<"the given number is prime\n";
    }
    else {
    cout<<"the given number is composite\n";
    }
   
}