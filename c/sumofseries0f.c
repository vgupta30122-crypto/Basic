#include<stdio.h>
int main() {
    //1-2+3-4+5......
    //od number  add
    //even number  substract
     int n;
    printf("enter the number :");
    scanf("%d",&n);
    int sum =0;
    if(n%2==0){
        sum =-n/2;

    }
    else{
        sum =-n/2+n;

    }
    printf("the sum is :%d",sum);
    return 0;
}