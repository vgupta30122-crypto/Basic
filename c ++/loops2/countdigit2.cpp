#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a nuumber:";
    cin>>n;
    int count =0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count;
}
// enter a nuumber:4567
// 4 