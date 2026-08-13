#include<stdio.h>
 int main(){
    int n;
    printf("enter the number of rows and colums :");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter all the element:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){//or j= i to n-1 
            scanf("%d",&arr[i][j]);
        }
    }
    // transepose 

    for(int i=0;i<n;i++){

        for(int j=0;j<=i;j++){
            //swap arr[i][j]=arr[j][i]
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            //break;
        }
        printf("\n");
    }
    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
// enter the number of rows and colums :3
// enter all the element:
// 1 2 3 
// 4 5 6
// 6 7 8



// 1 4 6 
// 2 5 7 
// 3 6 8
