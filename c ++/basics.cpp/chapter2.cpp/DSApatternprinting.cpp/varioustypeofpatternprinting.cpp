// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number a:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//         }
//         enter number a:8
// ********
// ********
// ********
// ********
// ********
// ********
// ********
// ********


    //}
//    #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number a:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j ||i+j==n+1){
//             cout<<"*";
//         }
    
//          else {
//               cout<<" ";
//         }
//     }
//         cout<<"\n";
    
// } 
//     }
   // enter number a:6
// *    *
//  *  *
//   **
//   **
//  *  *
// *    *
//   #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number a:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j ||i+j==n+1 ||  i==1 || j==1||i==n |j==n){
//             cout<<" * ";
//         }
    
//          else {
//               cout<<"   ";
//         }
//     }
//         cout<<"\n";
    
// } 
//     }
//     enter number a:8
//  *  *  *  *  *  *  *  * 
//  *  *              *  * 
//  *     *        *     * 
//  *        *  *        * 
//  *        *  *        * 
//  *     *        *     * 
//  *  *              *  * 
//  *  *  *  *  *  *  *  * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number a:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j>=n+1 ||i==n |j==n ){
            cout<<" * ";
        }
    
         else {
              cout<<"   ";
        }
    }
        cout<<"\n";
    
} 
    }
//     enter number a:9
//                          *
//                       *  *
//                    *  *  *
//                 *  *  *  *
//              *  *  *  *  *
//           *  *  *  *  *  *
//        *  *  *  *  *  *  *
//     *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *