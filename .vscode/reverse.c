#include<stdio.h>
void reverse (int arr[],int a,int b){//here a,b like as a = starting index b = ending index 
 for(int i=a,j=b;i<j;i++,j--){//revercing part of array
    int temp =arr[i];
    arr[i] =arr[j];
    arr[j]=temp;
}
return;
}
int main(){
    int arr[7] ={1,2,3,4,5,6,7};
   reverse (arr, 0,6);//index 0to 6 reverse (arr, 0,6) according to  this 
     reverse (arr, 0,2);//0to 2 index rev 
     reverse (arr, 3,6); // 3 to 6 index rev//we can change the individual index 
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
}
}
// 1 5 4 3 2 6 7 