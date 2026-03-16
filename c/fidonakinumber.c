#include<stdio.h>
int main() {
  /*enter the number=5
the 1th fibnoki is  2
the 2th fibnoki is  3
the 3th fibnoki is  5
the 4th fibnoki is  8
the 5th fibnoki is  13*/
    int n ,i;
    printf("enter the number=");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for( int i=1;i<=n; i++){
        sum =a+b;
        a =b;
        b =sum;
    
    printf("the %dth fibnoki is  %d\n",i,sum);
    }
    return 0;

    }