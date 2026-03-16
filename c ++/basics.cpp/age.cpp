#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // if( n>=18){
    //     cout<<"eligible";
    // }
    //     else if ( 10<n<18){
    //       cout<<" teenager";  
    //     }
    //     else {
    //         cout<<"not eligible";
            
    //     }
    if((n%5==0)||(n%3==0)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
     

    }
    