#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number a:");
    scanf("%d",&a);
    printf("enter a number b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
 printf("the value of a is:%d\n",a);
 printf("the value of bis:%d\n",b);   
}
// enter a number a:5
// enter a number b:7
// the value of a is:7
// the value of bis:5