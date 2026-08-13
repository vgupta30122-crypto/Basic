// #include<iostream>
// using namespace std;
// int main(){
// int arr[] ={ 1,2,3,4,5};  //0x61fef8 address of the array
// int *ptr=arr;  // address
// cout<<ptr<<endl;
// ptr[0]=4;
// ptr[1]=5;
// ptr[2]=7;
// for(int i=0;i<5;i++){
//     cout<<ptr[i]<<" ";
// }

// }
// pointer can have excess intire array 
// 0x61fef4
// 4 5 7 4 5
#include<iostream>
using namespace std;
int main(){
int arr[] ={ 1,2,3,4,5}; 
int *ptr=arr;  //address
for(int i=0;i<5;i++){
    cout<<*ptr<<" ";
    ptr ++;
}
}
// out put  1 2 3 4 5

