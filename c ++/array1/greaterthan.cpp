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
int x;
cout<<"enter the element :";
cin>>x;
  int count =0;
  for(int i=0;i<n;i++){
   if(arr[i]>x) count++;
} 
cout<<count;
}
// enter the size of the array:6 
// enter the element of the array:1 2 3 4 5 7
// enter the element :4 
// 2
