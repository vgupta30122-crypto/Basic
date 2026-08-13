// #include<iostream>
// using namespace std ;
// int main(){
//     int x =190;
//     int *p=&x;
//     x=98;
//     cout<<*p;
// }
//190 
// update valu
// p ke under jo address rakha hai use address pr jao and 
// vha ki valure print kr do

#include<iostream>
using namespace std ;
int main(){
    int x =190;
    int *p=&x;
    cout<<x<<endl;
    *p=5;// derefference 
    
    cout<<x;
}
// 190
// 5