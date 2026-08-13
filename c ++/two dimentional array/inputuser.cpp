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
        // cout<<endl;
    }
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
    cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }

}
// enter the coloms:4 
// enter the element of the array:1 2 3 4 5 6 7 8 9 2 3 5
// 1 2 3 4 
// 5 6 7 8 
// 9 2 3 5