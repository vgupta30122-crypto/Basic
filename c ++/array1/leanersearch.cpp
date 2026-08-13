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

bool flag =false;
for(int i=0;i<n;i++){
  if(arr[i]==x)
    flag =true;
}
  if(flag==true) cout<<"present";
  
  else
    cout<<"not present :";
  
   
} 
// enter the size of the array:5
// enter the element of the array:1 2 3 4 5 
// enter the element :3
// present
