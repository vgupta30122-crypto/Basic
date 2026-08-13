// #include<iostream>
// using namespace std;
// int fact (int n){
//     // if(n==0 &&n==1) return ;
//     int f=1;
//     for(int i=2;i<=n;i++){
//         f=f*i;
//         // fact(n-1);
//     }
//     return f;
// }
// int main(){
//     int n;
//     cout<<"enter a number of n:\n";
//     cin>>n;
//     cout<<"fact of the number is ="<<fact(n);
// }
// enter a number of n:
// 3
// fact of the number is =6
// #include<iostream>
// using namespace std;
// void factupto (int n){
//     for(int j=1;j<=n;j++){
//         int f=1;
//     for(int i=2;i<=j;i++){
//         f=f*i;
       
//     }
//     cout<<f<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the number of n:";
//     cin>>n;
//     factupto(n);
// }
// enter the number of n:5
// 1
// 2
// 6
// 24
// 120

#include<iostream>
using namespace std;
void factupto (int n){
        int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    cout<<f<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of n:";
    cin>>n;
    factupto(n);
}
// enter the number of n:5
// 1
// 2
// 6
// 24
// 120