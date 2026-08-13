#include<stdio.h>
int main(){
    int n,fd,ld;
    printf("enter a number :");
    scanf("%d",&n);
    ld=n%10;
    while(n>=10){
        n=n/10;
    }
    fd=n;
    printf("the sum of first digit and the sum of last digit : %d",(fd+ld));

}
// enter a number :34567
// the sum of first digit and the sum of last digit : 10