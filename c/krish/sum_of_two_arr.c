// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the Value size of array:");
//     scanf("%d",&n);
//     int a[n],b[n],sum[n];
//     for(int i=0;i<n;i++){
//         printf("Enter the number a[%d]",i);
//         scanf("%d",&a[i]);
//         printf("Enter the number b[%d]",i);
//         scanf("%d",&b[i]);
//         sum[i]=a[i]+b[i];
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",sum[i]);
//     }
//     return 0;
// }
#include <stdio.h>
int main (){
      int n;
      printf("enter the number :");
      scanf("%d",&n);
      for(int i=1; i<=n; i++){
         for(int j=1; j<=i; j++){
        printf("*");
      }
      printf("\n");
}
}