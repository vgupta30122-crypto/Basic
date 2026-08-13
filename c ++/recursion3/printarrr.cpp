#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx] <<" ";
    display(arr,n,idx+1);
}
int main(){
    int n;
    // int i=0;
    cout<<"enter the size of element :";
    cin>>n;
      int arr[n];

    cout<<"enter the elementr of the array:";
    for(int i = 0; i < n; i++) {
    cin>>arr[i];
    }
    display(arr,n,0);
    
}
// enter the size of element :6
// enter the elementr of the array:1 2 3 4 5 6 
// 1 2 3 4 5 6 