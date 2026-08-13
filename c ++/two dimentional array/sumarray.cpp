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
    int sum =0;
   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum +=arr[i][j];
        }
    }
    cout<<"the sum of all the element in this array is:";
    cout<<sum;
}
// enter the rows:3 
// enter the coloms:3
// enter the element of the array:1 2 3 4 5 6 7 8 9
// the sum of all the element in this array is:45

