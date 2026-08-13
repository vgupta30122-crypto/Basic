// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return ;
//     cout<<"hello pw"<<endl;
//     fun(n-1);
// }
// int main(){
//     fun(6);
// }
// hello pw
// hello pw
// hello pw
// hello pw
// hello pw
// hello pw
// cw done n no of times good morning print krna tha 
#include<iostream>
using namespace std;
void great(int n){
    if(n==0) return ;
    cout<<"good morning"<<endl;
    great(n-1);

}
int main(){
    int n;
    // cout<<"enter a number n:"<<endl;
    cin>>n;
    great(n);
}
// 3
// good morning
// good morning
// good morning
