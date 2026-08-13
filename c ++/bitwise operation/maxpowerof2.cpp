// #include<iostream>

// using namespace std;
// int max_power_of2(int n){
//   n=n|(n>>1);  
//   n=n|(n>>2); 
//   n=n|(n>>4); 
//   n=n|(n>>8); 
//   n=n|(n>>16); 
//   return (n+1)>>1;

// }
// int main(){
//     int x=23;
//     int temp;
//     while(x!=0){
//         temp =x;
//         x=x&(x-1);

//     }
//     cout<<temp<<"\n";
//     int y =23;
//     cout<<max_power_of2(y)<<"\n";
//     return 0;

// }
// 16
// 16

// "Given an integer array nums, in which exactly two elements 
// appear only once and all the other elements appear exactly twice.
//  Find the two elements that appear only once."


#include<iostream>

using namespace std;
void findunique(int *arr,int n){
    int res =0;
    for(int i=0;i<n;i++) res =res^arr[i];
    int temp =res ;
    int k=0;
    while(true) { 
        if((temp & 1) ==1){
            break;

        }
        temp =temp >>1;
        k++;
    }
    int retval =0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        if(((num>>k)& 1 ) ==1)  retval ^=num;
    }
    cout<<retval<<" ";
    res =retval ^ res;
    cout<<res<<" ";
}
int main(){
    int arr[]={1,2,1,3,2,5};
    int n=6;
    findunique(arr,n);
    return 0;

}

// 3 5 

