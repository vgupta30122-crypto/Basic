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
    int x;
    cout<<"enter the rows:";
    cin>>x;
    int y;
    cout<<"enter the coloms:";
    cin>>y;
    if(m != x || n != y){
    cout << "Matrix addition is not possible!";
    
    }

    int arr2[x][y];
      cout<<"enter the  2nd matrix element of the array:\n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr2[i][j];

        }
    }
    
    int arr3[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           // arr3[i][j]=arr1[i][j]+arr2[i][j];
            cout<<arr1[i][j]+arr2[i][j]<<" "; // it is also work without extra loop
        }
        cout<<endl;
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr3[i][j]<<" ";
            
    //     }
    
            
        
    //cout<<endl;
}

// enter the rows:2
// enter the coloms:2
// enter the  1st matrix element of the array:
// 1 2 3 4
// enter the rows:2
// enter the coloms:2
// enter the  2nd matrix element of the array:
// 1 2 3 4
// 2 4 
// 6 8
