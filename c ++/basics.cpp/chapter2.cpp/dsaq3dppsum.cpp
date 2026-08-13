#include<iostream>
using namespace std;
int main(){
    int x ,y ,sum=0;
    cout<<"enter a value of x :";
    cin>>x;
    cout<<"enter a value of y:";
    cin>>y;
    for(int i=x;i<=y;i++){
        if(i%2==0)
        sum=sum+i;
    }
    cout<<sum;
}
//enter a value of x :2
//enter a value of y:100
//2550