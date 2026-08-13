// #include<stdio.h>
// int main(){
//      int arr[3][3]={{1,2,3},{2,3,4},{4,5,6}};
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",arr[i][j]);

//         }
//      printf("\n");
// }
// }
// 1 2 3 
// 2 3 4 
// 4 5 6
#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of coloms:");
    scanf("%d",&c);

     int arr[r][c];//r*c total element
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
        }
        printf("\n");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
  }
    printf("\n");
}
}
// enter the number of rows:3
// enter the number of coloms:3
// 1 2 3 4 5 6 7 8 9
// 1 2 3 
// 4 5 6 
// 7 8 9 
 
