#include<iostream>
using namespace std;
int main() {
    int n;
     cout<<"enter a number:";
     cin>>n;
     for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){ 
         if( j=1 ||i==n || i==1||j==n ){
     cout<<" * ";
       }
       else {
        cout<<"   ";
         }
       cout<<"\n";
    }
}
}


// for(int i=0;i<5;i++){
//     for(int j=0;j<i;j++){
//         cout<<"%";
//     }
//     cout<<"\n";
// }
//     }