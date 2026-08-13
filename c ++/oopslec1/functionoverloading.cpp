#include<iostream>
using namespace std;
class Loading{ //parent class 
    public:
   void sum(int a,int b){
    cout<<a+b<<"\n";
   }
   void sum(int a,int b,int c){
    cout<<a+b+c<<"\n";
   }
};

int main(){
    Loading a;
    a.sum(6,8);
    a.sum(4,6,8);
  
}
// 14

// 14
// 18