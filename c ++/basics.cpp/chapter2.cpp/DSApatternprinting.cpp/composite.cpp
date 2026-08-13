// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             cout<<"the given number is composite";
//             break;
//         }
//     }
// }
// enter a number :56
// the given number is composite
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             cout<<"the given number is composite";
        
//         }
     
//      else  {
//               cout<<"the given number is prime";
//             } 
//             }
//         }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    bool flag = true;//true means prime 
    for(int i =2;i<=n/2 ;i++){
        if(n%i==0){
            flag = false; // false means composite 
            break; //to get out of the loop
        }
    }
    if( n==1) cout<<"neither prime nor composite";
    else if (flag ==true ) cout<<"prime";
    else cout<<"composite";
}