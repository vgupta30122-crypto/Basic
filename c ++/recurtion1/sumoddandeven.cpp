#include<iostream>
using namespace std;
void sumatob  (int sum, int a, int b){
    // base case 
    if(a==0){
        if(a%b==0)
    cout<<sum<<endl;
    return ;
}
sumatob(sum+n,n-1);
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