#include<stdio.h>
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;

}
int main(){
    int a,b;
    printf("enter a number a:");
    scanf("%d",&a);
    printf("enter a number b:");
    scanf("%d",&b);
    swap(a,b);
    printf("the value of a is:%d\n",a);
 printf("the value of bis:%d\n",b);   
}