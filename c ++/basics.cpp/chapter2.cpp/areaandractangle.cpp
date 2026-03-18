#include<iostream>
using namespace std;
int main(){
    int l,b,a,p;
    cout<<"enter length:";
    cin>>l;
     cout<<"enter bridth:";
    cin>>b;
    a=l*b;
    cout<<a;
    p=2*(l+b);
    cout<<b;
    if(a>p){
        cout<<"area is greater than its perimeter"<<endl;
    }
    else{
        cout<<"area is less than its perimeter"<<endl;
    }
    }