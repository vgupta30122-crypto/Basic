// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for(int i=4;i<=3*n+1;i=i+3){
//         cout<<i<<" ";
//     }
// }
// enter a number :5
// 4
// 7
// 10
// 13
// 16
// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for(int i=1;i<=(2*n-1);i+=2){
//         cout<<i<<" ";
//     }
//     }
//     enter a number :6
// 1 3 5 7 9 11
// using extra varieable  
// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     int a=4;
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a=a+3;
//     }
//     }
//     enter a number :6
// 4
// 7
// 10
// 13
// 16
// 19
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int a=100;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a-3;
    }
}

// enter a number :4
// 100
// 97
// 94
// 91
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for(int i=100;i>=(103-3*n);i-=3){
//         cout<<i<<endl;
//     }
// }

//         enter a number :4
// 100
// 97
// 94
// 91