/*#include<stdio.h>
int main() {
    int n ,i;
    printf("enter the number=");
    scanf("%d",&n);
    int product =1;
    for(i=1; i<=n; i++){
      product =product*i; 
    }
      printf("facotial of the number=%d",product);
      return 0; 
    }*/
   //out put 
//   enter the number=5
//facotial of 1 is:1
//facotial of 2 is:2
//facotial of 3 is:6
//facotial of 4 is:24
//facotial of 5 is:120
#include<stdio.h>
int main() {
    int n ;
    printf("enter the number=");
    scanf("%d",&n);
    int product =1;
    for(int i=1; i<=n; i++){
      product =product*i; 
      printf("factorial of %d is:%d\n",i,product);
    }
      return 0; 
    }
