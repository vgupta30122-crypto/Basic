#include<stdio.h>
int main(){
    int r,c;
    printf("enter the rows and colums:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
}
int sum =0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        sum +=arr[i][j];
    }
}
printf("the sum of the given matrix is:%d",sum);
}
//outputenter the rows and colums:3
// 3
// 1 2 3
// 4 5 6
// 6 7 8
// the sum of the given matrix is:42