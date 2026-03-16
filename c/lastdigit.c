#include<stdio.h>
int main() {
    int n ,lastdigit;
    printf("enter the number :");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("the number of digit are %d",sum);

return 0;
}
