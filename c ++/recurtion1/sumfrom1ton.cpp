// #include<iostream>
// using namespace std;
// void sum1toN  (int sum, int n){
//     // base case 
//     if(n==0){
//     cout<<sum<<endl;
//     return ;
// }
// sum1toN(sum+n,n-1);
// }
// int main(){
//     int n;
//     cout<<"enter the number of n:";
//     cin>>n;
//    sum1toN (0,n);
// }
// enter the number of n:10
// 55
#include<iostream>
using namespace std;
void sum1toN  (int sum, int n){
    // base case 
    if(n==0){
    cout<<sum<<endl;
    return ;
}
sum1toN(sum+n,n-1);
}
int sum2(int n){
    if(n==0) return 0;
    return n+sum2(n-1);
}
int main(){
    int n;
    cout<<"enter the number of n:";
    cin>>n;
//    sum1toN (0,n);
cout<<sum2(n);
}
// enter the number of n:6
// 21