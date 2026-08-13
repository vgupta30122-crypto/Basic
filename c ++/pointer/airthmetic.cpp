#include<iostream>
using namespace std ;
int main(){
    // int x=9;
    // int *ptr=&x;
    // cout<<ptr<<endl;//0x61ff08
    // ptr =ptr+1;// yha 4 byte inc ho rhi hai
    // cout<<ptr<<endl;//0x61ff0c
    // bool flag =true ;
    // bool*ptr =&flag;
    // cout<<ptr<<endl;//0x61ff0b
    // ptr =ptr +1;  // yha ek byte inc ho rhi hai
    // cout<<ptr<<endl;//0x61ff0c
    // bool flag =true ;
    // bool*ptr =&flag;
    // cout<<ptr<<endl;//0x61ff0b
    // ptr++;  
    // cout<<ptr<<endl;//0x61ff0c

int x=9;
    int *ptr=&x;
    cout<<*ptr<<endl;//9
    //*ptr =*ptr+1;// x=x+1
    (*ptr)++; //ye bhi work krega 
    cout<<*ptr<<endl;//10
// 9
// 10

 }