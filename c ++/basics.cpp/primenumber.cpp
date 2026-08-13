#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n =";
    cin>>n;
    for(int i=1; i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
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
    cout << endl;
   
}