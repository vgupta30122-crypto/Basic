#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the rows and coloms:";
    cin>>m;
    int arr1[m][m];
    cout<<"enter the  1st matrix element of the array:\n";
    for(int i=0;i<m;i++){ // rows
        for(int j=0;j<m;j++){ // coloms
            cin>>arr1[i][j];
        }
        }
        cout<<endl;
        // print 
         for(int i=0;i<m;i++){ // rows
        for(int j=0;j<m;j++){ // coloms
          cout<<arr1[i][j]<<" ";
        }
         cout<<endl;
    }
    // transpose  in the same matrix
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                //swaping of element 
                int temp=arr1[i][j];
                arr1[i][j]=arr1[j][i];
                arr1[j][i]=temp;
            }
        }    
 cout<<endl;

        // print 
        for(int i=0;i<m;i++){ 
        for(int j=0;j<m;j++){
             cout<<arr1[i][j]<<" ";

    }
     cout<<endl;
}
}
// enter the rows and coloms:3
// enter the  1st matrix element of the array:
// 1 2 3 4 5 6 7 8 9

// 1 2 3 
// 4 5 6 
// 7 8 9 

// 1 4 7 
// 2 5 8 
// 3 6 9 
