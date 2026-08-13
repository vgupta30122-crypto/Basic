#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the size of the array:";
cin>>n;
int arr[100];
cout<<"enter the element of the array:";
for(int i=0;i<n;i++){
    cin>>arr[i];

}
int sum =0;
for(int i=0;i<n;i++){
   sum =sum +arr[i];
    
}
cout<<sum;
}
// enter the size of the array: 5
// enter the element of the array:1 2 3 4 5
// 15