#include<iostream>
#include<climits>
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
//int max =arr[0]; 
int max =INT_MIN; // ye in build fun hai 
for(int i=1;i<n;i++){
    if(max<arr[i]) max =arr[i];
}
cout<<max;
}
// enter the size of the array:6 
// enter the element of the array:2 3 4 5 6 7
// 7