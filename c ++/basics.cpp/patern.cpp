// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1;j<=i; j++){
//         cout<<"*";
//         }
//         cout<<"\n";

//     }
// }
//output
// *
// **
// ***
// ****
// *****
// ******
// *******
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1;j<=n; j++){
//             if(i==(n+1)/2||j==(n+1)/2){
//                 cout<<" * ";
//             }
//                  else {
//                     cout<<"   ";
//                  }
//         } 
//         cout<<"\n";

//                  }
//         //cout<<"\n";
//                 }
//                 enter a number :7
//    *   
//    *   
//    *   
// *******
//    *   
//    *   
//    *  
//     #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1;j<=n; j++){
//             if(i==1||j==(n+1)/2){
//                 cout<<" * ";
//             }
//                  else {
//                     cout<<"   ";
//                  }
//         } 
//         cout<<"\n";

//                  }
//                 }
//                 enter a number :7
//  *  *  *  *  *  *  * 
//           *
//           *
//           *
//           *
//           *
//           *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1;j<=n; j++){
//             if(i==1||j==(n+1)/2 ||i==n){
//                 cout<<" * ";
//             }
//                  else {
//                     cout<<"   ";
//                  }
//         } 
//         cout<<"\n";

//                  }
       //         }  
//                 enter a number :7
//  *  *  *  *  *  *  * 
//           *
//           *
//           *
//           *
//           *
//  *  *  *  *  *  *  *       
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1;j<=n; j++){
//             if(i==1||j+i==(n+1) ||i==n){
//                 cout<<" * ";
//             }
//                  else {
//                     cout<<"   ";
//                  }
//         } 
//         cout<<"\n";

//                  }
//                 }
//                 enter a number :6
//  *  *  *  *  *  * 
//              *    
//           *       
//        *
//     *
//  *  *  *  *  *  * 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1;j<=n; j++){
//             if(i==1||i==((n+1)/2)||j==1&&j<=(n-2)){
//                 cout<<" * ";
//             }
//                  else {
//                     cout<<"   ";
//                  }
//         } 
//         cout<<"\n";

//                  }
//                 }
//                 enter a number :6
//  *  *  *  *  *  * 
//  *
//  *  *  *  *  *  * 
//  *
//  *
//  *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1;j<=n; j++){
//             if(i==1||i==(n+1)/2 ||j==1||j==n && i<=n/2){
//                 cout<<" * ";
//             }
//                  else {
//                     cout<<"   ";
//                  }
//         } 
//         cout<<"\n";

//                  }
//                 }
                
// enter a number :7
//  *  *  *  *  *  *  * 
//  *                 * 
//  *                 * 
//  *  *  *  *  *  *  * 
//  *
//  *
//  *
 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    for (int i=1;i<=n;i++){
        for( int j=1;j<=n; j++){
            //if((i==j||((i+j))==(n+1)) &&i<=j &&j<=i ){
            if(i==1||i==n||i==n/2+1||j==1||j==n )  {     
                cout<<" * ";
            }
                 else {
                    cout<<"   ";
                 }
        } 
        cout<<"\n";

                 }
                }