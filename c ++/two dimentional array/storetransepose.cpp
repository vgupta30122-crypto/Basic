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
    // store the transpose 
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr1[j][i];
        }
        
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
            //cout<<arr1[j][i]<<" "; //it is also work 
        }
        cout<<"\n";
}
}
// enter the rows:2
// enter the coloms:2
// enter the  1st matrix element of the array:
// 1 2 3 4

// 1 2
// 3 4


// 1 3
// 2 4 


