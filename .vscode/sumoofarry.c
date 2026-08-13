#include<stdio.h>
int main(){
    int sum =0;
    int arr[5]={1,2,3,45,6};
    for(int i=0;i<5;i++){
        sum =sum +arr[i];
    }
        printf("the sum of the element :%d",sum);
        return 0;
    }
//   the sum of the element :57