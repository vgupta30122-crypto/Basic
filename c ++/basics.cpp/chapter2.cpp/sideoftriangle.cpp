#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;
    cout<<"enter number c:";
    //cin>>c;
    //cin>>b;
    cin>>c;
    if((a+b>c) &&(b+c>a) &&(c+a>b)){
        cout<<"the side is a triangle:";
    }
    else {
        cout<<"the side is not a triangle:";
    }
}