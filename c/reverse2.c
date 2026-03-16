#include<stdio.h>
int main() {
    //WAP TO PRINT THE SUM OF GIVEN NUMBER AND ITS REVERSE 
    int n,sum,r;
    printf("enter the number :");
    scanf("%d",&n);
    int n;
    r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("The reversed number=%d\n",r);
    sum = n+r;
    printf("The sum of the number=%d",sum);
    return 0;
}
