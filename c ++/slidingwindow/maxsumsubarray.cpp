#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] ={7,1,2,5,8,9,3,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum =INT_MIN;
    int maxidx=0;
    int presum=0;
    for(int i=0;i<k;i++) {
        // int sum=0;
        presum +=arr[i];
    }
    maxsum =presum;
    int i=1;
    int j=k;
    // sliding algo
    while(j<n){
        int currsum=presum+arr[j] -arr[i-1];
        if(maxsum<currsum){
            maxsum=currsum;
            maxidx=i;
        }
        presum =currsum;
        i++;
        j++;
    } 
       // TC 0(N)
    cout<<maxsum<<endl;
    cout<<maxidx;
}
// 22
// 3











