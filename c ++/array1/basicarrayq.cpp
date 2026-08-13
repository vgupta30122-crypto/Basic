#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the size of the array:";
cin>>n;
int marks[100];
cout<<"enter the element of the array:";
for(int i=0;i<n;i++){
    cin>>marks[i];
}
for(int i=0;i<n;i++){
  if(marks[i]<35){
    cout<<i<<endl;
  }
}

 }
// enter the size of the array:6 
// enter the element of the array: 57 86 96 78 34 24 
// 4
// 5
// declration int size =10,b[size]; correct 