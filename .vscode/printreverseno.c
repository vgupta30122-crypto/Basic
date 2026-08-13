#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter element number:%d\n",i+1);
        scanf("%d ",&arr[i]);
    }
         for(int i=5;i>=0;i--){
            printf("%d",arr[i]);
         }
    }
//     Enter element number:1
// 4
// 5
// Enter element number:2
// 6
// Enter element number:3
// 7
// Enter element number:4
// 8
// Enter element number:5
// 9
//587654
