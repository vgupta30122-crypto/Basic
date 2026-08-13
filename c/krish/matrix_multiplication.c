#include<stdio.h>
int main(){
    int r=3,c=4,n=4,m=5,sum=0;
int arr[3][4]={
    {1,2,3,4},
    {4,5,6,7},
    {6,7,8,9}};
int brr[4][5]={
    {1,2,3,4,5},
    {2,3,4,5,6},
    {3,4,5,6,7},
    {4,5,6,7,8}};
int cr[r][m];
for(int i=0;i<r;i++){
    
    for(int j=0;j<m;j++){
sum=0;
        for(int k=0;k<c;k++){
            sum=arr[i][k]*brr[k][j]+sum;
        }
        cr[i][j]=sum;
    }
}

for(int i=0;i<r;i++){
    
    for(int j=0;j<m;j++){
    printf(" %d ",cr[i][j]);
}
printf("\n");
}
    return 0;
}