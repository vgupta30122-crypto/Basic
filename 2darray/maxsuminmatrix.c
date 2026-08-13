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
int maxsum=0;
int m=0;

 for(int j=0;j<c;j++){
    maxsum =maxsum +arr[0][j];
   

    }
    for(int i=1;i<r;i++){
        int sum =0;
        for(int j=0;j<c;j++){
    sum =sum +arr[i][j];
    }
    if(sum>maxsum){
        maxsum=sum;
        m=i;
    }
}
printf("row with maximum sum= %d\n",m);
printf("maximum sum =%d\n",maxsum);
}
// enter the number of rows and colums :2
// 2
// 2 3 
// 5 6 
// row with maximum sum= 1
// maximum sum =11