#include<stdio.h>
int power(int a,int b){
    if(b==0)return 1;
    int rec =a*power(a,b-1);
    return rec ;
}
int main(){
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    int b;
    printf("enter the number ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}
// enter the number 2
// enter the number 5
// 2 raised to the power 5 is 32