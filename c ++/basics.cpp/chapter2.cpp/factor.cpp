// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter number a:";
//     cin>>a;
//     for( int i=1;i<=a;i++){
//         if(a%i==0){
//             cout<<i<<" ";
//         }
        
//     }
// }
// enter number a:6
// 1 2 3 6 
#include<iostream>
using namespace std;
int main(){
    int a;
    int  sum =0;
    cout<<"enter number a:";
    cin>>a;
    for( int i=1;i<=a;i++){
        if(a%i==0){
            sum =sum+i*i;
            cout<<sum<<" ";
        }
        
    }
}