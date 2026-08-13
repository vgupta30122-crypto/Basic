// #include<iostream>
// using namespace std;
//  int main(){
//      int n ,ld,sum=0;
//     cout<<"enter a number n=";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//          //ld==0;
//         int rem =n%10;
//         n=n/10;
//         sum =sum +ld;
        
//     }
    
//     cout<<"sum of the given number"<<sum<<"\n";
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int sum =0;
    while (n>0){
        int rem =n%10;
        n=n/10;
        sum =sum +rem;
    }
    cout<<sum;
}
// enter a number :45
// 9

// #include<iostream>
// using namespace std;
// int main(){
//     int sum =0;
//     bool check =true;
//     for(int i=1; check ==true; i++){
//         int x;
//         cin>>x;
//         if(x==-1){
//             break;
//         }
//         sum =sum+x;
//     }
//     cout<<sum;
// }
//    5 7 8 9 -1
// 29 
// #include<iostream>
// using namespace std;
// int main(){
//     int sum =0;
//     bool check =true;
//     while(check){
//         int n;
//         cin>>n;
//         if(n==-1){
//             check =false;
//         }
//         sum +=n;
//     }
//     cout<<sum+1;
// }
// 4 6 7 8 9 -1
// 34