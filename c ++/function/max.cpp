#include<iostream>
using namespace std;
int maxthree(int a,int b,int c){
    if(a>b &&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }

}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
     cout<<"max of three number:";
    cout<<maxthree(a,b,c);
   
}
// 5 6 9
// max of three number:9