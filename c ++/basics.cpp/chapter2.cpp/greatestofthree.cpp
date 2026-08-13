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
    if((a>b)&&(a>c)){

    cout<<"a is greatest number:" <<a;
    }
    else if((b>a)&&(b>c)){

    cout<<"b is greatest number:"<<b;
    }
    else {

    cout<<"c is greatest number:"<<c;
    }
    }