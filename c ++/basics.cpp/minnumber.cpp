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
    if(a<b && a<c){
        cout<<"a is least";
    }
    else if(b<a&&b<c){
        cout<<"b is least";
    }
    else {
        cout<<"c is least";
    
    }
    }
