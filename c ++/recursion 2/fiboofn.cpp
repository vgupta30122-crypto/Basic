// #include<iostream>
// using namespace std;
// int fibo (int n){
//     if(n==1 || n==2) return 1;
//     return fibo(n-1)+ fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the number of n:";
//     cin>>n;
//     cout<<fibo(n);

// }
// enter the number of n:5
// 5
#include<iostream>
using namespace std;
int fibo (int n){
    if(n==1 || n==2) return 1;
       int leftans= fibo(n-1);
       int rightans=  fibo(n-2);
    return leftans + rightans;
}

int main(){
    int n;
    cout<<"enter the number of n:";
    cin>>n;
    cout<<fibo(n);

}
// enter the number of n:6
// 8