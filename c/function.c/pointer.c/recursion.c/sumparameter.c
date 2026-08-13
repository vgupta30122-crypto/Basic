// #include<stdio.h>
// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return;
//     }
//     sum (n-1,s+n);
//     return;

// }
// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }
// enter the number 5
// 15
//using return type same q 
#include<stdio.h>
int sum(int n){
    if(n==1 ||n==0) return 1;
 return n+sum(n-1);   
}
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
int fact =sum(n);
printf("%d",fact);
return 0;
}
// enter a number :5
// 15