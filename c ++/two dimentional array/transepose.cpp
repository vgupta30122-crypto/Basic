#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the rows:";
    cin>>m;
    int n;
    cout<<"enter the coloms:";
    cin>>n;
    int arr1[m][n];
    cout<<"enter the  1st matrix element of the array:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];

        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n";
    // transepose 
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}
// enter the rows:3
// enter the coloms:3
// enter the  1st matrix element of the array:
// 2 3 4 
// 5 6 7
// 7 8 9

// 2 3 4 
// 5 6 7 
// 7 8 9 

// 2 5 7 
// 3 6 8 
// 4 7 9 
