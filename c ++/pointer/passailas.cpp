#include<iostream>
using namespace std;
void swap(int &x,int &y){ //int &x,int &y se hota hai 
    // pass by reffreence 
    int temp=x;
     x=y;
     y=temp;
     return ;

}
int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y;
}
// 5 6 
// 6 5
