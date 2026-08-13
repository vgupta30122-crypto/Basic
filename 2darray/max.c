#include<stdio.h>
int main(){
    int r,c;
    printf("enter the number of rows and colums :");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }

}
int max=arr[0][0];
int m=0,n=0;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                m=i;
                n=j;
            }

        }
}
printf("the maximum element in the array:%d\n",max);
printf("INDEX=[%d][%d]\n",m,n);
}
// enter the number of rows and colums :2
// 2
// 1 2 
// 2 3
// the maximum element in the array:3
// enter the number of rows and colums :2
// 2
// 2 3 
// 4 5
// the maximum element in the array:5
// INDEX=[1][1]