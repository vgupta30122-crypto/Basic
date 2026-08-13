#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;
    cout<<"enter number c:";
    cin>>c;
    if(a>b){
        if(a>c){
        cout<<a<<"is largest";

    }
    else { //c>a>b
        cout<<c<<"is largest"; 
    }
}
    else  { //b>a
        if (b>c){
          cout<<b<<"is largest";
  
        }
    
        else {
          cout<<c<<"is largest";  
        }
    }
}
