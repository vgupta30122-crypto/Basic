#include<iostream>
using namespace std ;
int main(){
    int x=9;
    int *ptr =&x;
    int**p =&ptr;
    // cout<<&x<<endl;//9   only x krenge //0x61ff08 jb &x krenge 
    // cout<<ptr<<endl;//0x61ff08
    // cout<<p<<endl;//0x61ff04
    // ab hoga khel jb * ka use krenge jha * lgega address print hota jayega 

    // cout<<x<<endl;  //9     
    // cout<<*ptr<<endl;//9
    // cout<<**p<<endl;//9
    // yha teno ka mtlb x ki value   hi hai 


    cout<<&x<<endl;  //0x61ff08
    cout<<ptr<<endl; //0x61ff08
    cout<<*p<<endl; //0x61ff08
      // yha teno ka mtlb address  hi hai x ka 
}