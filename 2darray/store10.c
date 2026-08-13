#include<stdio.h>
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){//esme 5*5 ka matrix banana tha jiske hr element me 10 store ho
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
}
  }
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10

// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10
