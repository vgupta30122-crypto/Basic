#include<stdio.h>
int main(){
    int arr[7]={1,2,6,4,5,7,6};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                printf("the  duplicate number is :%d",arr[i]);
                break;
            }
        }
    }
}
// the  duplicate number is :6