#include<iostream>
using namespace std;
int main(){
    int arr[9]={ 1,2,3,4,6,7 ,15,18,21};
     int n=9;
    int x=15;
   
    // for(int i=0;i<n;i++){
    //     if(arr[i]>x){
    //         cout<<arr[i-1];// upper bound ke liye cout<<arr[i] 
    //         break;
    //     }
    // }
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1];
            break;
    }
    else if(arr[mid]<x) 
        // cout<<mid;
        low=mid+1;
    
    else
        // cout<<mid-1;
        high =mid-1;
}
    if(flag==false) cout<<arr[high]; // if y want print upper bound cout<<arr[low]; that it
    }

//18 means x =given element se kam wala element 

//7