#include<stdio.h>
int main(){
    int r,c;
    printf("enter the rows and colums:");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    printf("enter the first matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
}
printf("sum of the matrix:\n");
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]+=b[i][j];//result stored in first matrix 
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
 }
// enter the rows and colums:3
// 3
// enter the first matrix:
// 1 2 3 4 5 6 7 8 9
// enter the second matrix:
// 1 2 3 4 5 6 7 8 9
// sum of the matrix:
// 2 4 6 
// 8 10 12 
// 14 16 18 