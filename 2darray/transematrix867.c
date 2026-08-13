// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter the number of rows and colums :");
//     scanf("%d%d",&r,&c);
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }

// }
// printf("\n");
// for(int i=0;i<c;i++){
//     for(int j=0;j<r;j++){
//         printf("%d ",arr[j][i]);
//     }
//   printf("\n");  
// }
// }
// enter the number of rows and colums :2
// 3
// 1 2 3 
// 4 5 6 

// 1 4 
// 2 5 
// 3 6 esme only print hua hai  transpose 
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
printf("\n");
int brr[c][r];
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        //printf("%d ",arr[j][i]);
        brr[i][j]=arr[j][i];
    }
  printf("\n");  
}
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ",brr[i][j]);
}
printf("\n"); 
}
}// esme store hua hai then print 
// enter the number of rows and colums :2
// 3
// 1 2 3 
// 4 5 6




// 1 4 
// 2 5 
// 3 6 