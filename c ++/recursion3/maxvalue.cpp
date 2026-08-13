#include<iostream>
#include <climits>
using namespace std;
// void printmax(int arr[],int n,int idx,int max){
//     if(idx==n){
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max =arr[idx];
//     printmax(arr,n,idx+1,max);
// }
int maxinarray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxinarray(arr,n,idx+1));
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
//   printmax(arr,n,0,INT_MIN);
cout<<maxinarray(arr,n,0);
    
}
// two method hai ek fun call me printmax and maxinarray hai 
// enter the size of element :6
// enter the elementr of the array:2 30 45 67 89 17 
// 89
// enter the size of element :4
// enter the elementr of the array:12 44 67 1 
// 67