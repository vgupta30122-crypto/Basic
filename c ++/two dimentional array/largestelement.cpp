#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the rows:";
    cin>>m;
    int n;
    cout<<"enter the coloms:";
    cin>>n;
    int arr[m][n];
    cout<<"enter the element of the array:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }
    // int max =INT_MIN;  also use this 
    int max=arr[0][0];
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(arr[i][j]>max) max =arr[i][j];
        }
    
    // cout<<max<<" ";
}
cout<<" the max element of the array is:";
cout<<max<<" ";

 }
// enter the rows:2 
// enter the coloms:2 
// enter the element of the array:1 2 3 4
//  the max element of the array is:4 
