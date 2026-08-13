// #include<iostream>
// using namespace std;
// int  stair(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     return stair(n-1)+ stair(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the number of n:";
//     cin>>n;
//     cout<<stair(n);

// }
// enter the number of n:5
// 8

// if 3 jumps are also allowed throw_with_nested#include<iostream>
// using namespace std;
 #include<iostream>
using namespace std;
int  stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;

    return stair(n-1)+ stair(n-2) + stair(n-3);
}
int main(){
    int n;
    cout<<"enter the number of n:";
    cin>>n;
    cout<<stair(n);

}
// enter the number of n:4
// 7
// enter the number of n:3
// 4