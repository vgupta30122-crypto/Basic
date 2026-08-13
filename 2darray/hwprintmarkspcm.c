#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows/students:");
    scanf("%d",&r);
    int c;
    printf("enter the number of coloms/p c m subjects:");
    scanf("%d",&c);

     int arr[r][c];//r*c total element
     for(int i=0;i<r;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
        }
        printf("\n");
   for(int i=0;i<r;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
  }
    printf("\n");
}
}
// enter the number of rows/students:4
// enter the number of coloms/p c m subjects:3
// 45 67 89 67 89 80 90 70 67 60 90 89

// 45 67 89 
// 67 89 80 
// 90 70 67 
//60 90 89