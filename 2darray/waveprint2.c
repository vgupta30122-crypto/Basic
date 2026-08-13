#include<stdio.h>
int main(){ 
    int m;
    printf("enter the number rows of 1st matrix :");
    scanf("%d",&m);
    int n;
    printf("enter the number of colom of 1st matrix :");
    scanf("%d",&n);
    int a[m][n];
    printf("\nenter the element of 1st matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //wave print 
    printf("\n");
    for(int j=0;j<n;j++){
        if(j%2==0){
        for(int i=0;i<m;i++){
            printf("%d ",a[i][j]);
        }
    }
    else {
        for(int i=m-1;i>=0;i--){
            printf("%d ",a[i][j]);
        }
    }
        printf("\n");
    }
}
// enter the number rows of 1st matrix :3
// enter the number of colom of 1st matrix :3

// enter the element of 1st matrix:
// 1 2 3 
// 4 5 6 
// 6 7 8

// 1 4 6 
// 7 5 2 
// 3 6 8