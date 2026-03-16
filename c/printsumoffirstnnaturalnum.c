
//sum any n num and print reverse num as 98765432 
/*#include<stdio.h>
int main () {
    int n;
    printf("enter a number:");
    scanf("%d" ,&n);
    int sum =0;
    for(int i=1; i<=n; i++) {
        sum = sum+i;
    }
       printf(" sum is %d\n",sum);
       for (int  i=n; i>=1; i--){
        printf("%d",i);
       }
       return 0;
}*/
/*#include<stdio.h>
int main () {
    int n;
    printf("enter a number:");
    scanf("%d" ,&n);
    int sum =0;
    for(int i=1,j=n; i<=n && j>=1; i++,j--) {
        sum = sum+i;
        printf("%d\n",j);
    }
    printf("sum is %d\n",sum);
    return 0;
*/
#include<stdio.h>
int main () {
    int n;
    printf("enter a number:");
    scanf("%d" ,&n);
    for(int i=1; i<=10; i++){
        printf("table of number:%d\n",n*i);
    }
    return 0;
}