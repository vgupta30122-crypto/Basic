// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};

//     int x=3;
//     for(int i=0;i<7;i++){
//         if(arr[i]==x){
//             printf("%d is present in the array and its index is %d",x,i);
//             break;// ye esliye lga hai if array me do jgh same element hai to 
//             //ek hi baar print kre if u want print both then remove the break
//         }//if u want last same element print ho tb loop ulta chala do 
//     }
// }
//  output 3 is present in the array and its index is 2
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={12,21,3,4,5,6,87};
    int x=21;
    int idx =-1;
    bool flag =false;//false means not present 
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            flag = true; //true means present 
            idx =i; //ye index ke liye hai
            break;
        }
    }
    if(flag ==false){
        printf("%d is not present in the array:",x);
    }
    else{
       printf("%d is present in the array and its index is %d",x,idx); 
    }
    }
// 2 is not present in the array:
// 21 is present in the array and its index is 1