// #include<iostream>
// using namespace std ;
// int main(){
//     int x=9;
//     int*p=&x;
//     cout<<&x<<endl;// ye address print kr rha hai
//     cout<<p;//ye bhi address print kr rha hai both are same 
// } 
// 0x61ff08
// 0x61ff08
// #include<iostream>
// using namespace std ;
// int main(){
//     float x=9.8;
//     float*p=&x;
//     cout<<&x<<endl<<p;
// }
// 0x61ff08
// 0x61ff08
// #include<iostream>
// using namespace std ;
// int main(){
//     bool x=true;
//     bool*p=&x;
//     cout<<&x<<endl<<p;
// }
// 0x61ff0b
// 0x61ff0b
#include<iostream>
using namespace std ;
int main(){
    bool x=true;
    bool*p=&x;
    float y=9.8;
     float*p1=&y;
     int z=9;
     int*p2=&z;

    cout<<&x<<endl<<&y<<endl<<&z<<endl;
    cout<<p<<endl<<p1<<endl<<p2<<endl;
}// means x and p ka address same hai similarly yand z
// 0x61ff03
// 0x61fefc
// 0x61fef8
// 0x61ff03
// 0x61fefc
// 0x61fef8