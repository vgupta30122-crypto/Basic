// #include<iostream>
// using namespace std;

// void  fun(int x,int y){// ye farmal parameter hai () under
//     cout<<"address of fun x"<<&x<<endl;
//     cout<<"address of fun y"<<&y<<endl;
// }
// int main(){
//     int x=3;
//     int y=7;
//     cout<<"address of main x "<<&x<<endl;
//      cout<<"address of main y "<<&y<<endl;
//      fun(x,y);// actual parameter ( ke under x,y ya phir value)
///}
// address of main x 0x61ff0c
// address of main y 0x61ff08
// address of fun x0x61fef0
// address of fun y0x61fef4
#include<iostream>
using namespace std;
int a =8; // global
int main(){
    cout <<a<<endl;
    int a=7;//local  local ki aakat global se jada hai
    cout<<a<<endl;
}
