#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,6,7,15,18,21};
    int n=10;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";

    // }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         if(i!=arr[i]) {  
//         cout<<i;
//         break;
//     }
// }
// }

//5 smallst missing ele
int low=0;
int high =n-1;
int ans =-1;
while(low<=high){
int mid =low +(high-low)/2;
   if(arr[mid] == mid ) low =mid +1;
    else{
        ans= mid;
        high =mid -1;

    }
}
cout<<ans;
}
//5  smallst missing ele