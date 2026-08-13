// #include<stdio.h>
// int main(){
//     int n,d,temp;
//     int s=0;
//     printf("enter a number :");
//     scanf("%d",&n);
//     temp =n;
//     while(n>0){
//         d=n%10;
//         s=s+(d*d*d);
//         n=n/10;
//         }
//         if(s==temp){
//             printf("the no is armstrong");
//         }
//         else{
//              printf("the no is not armstrong");
//         }
// }
// enter a number :153
// the no is armstrong
//FIND ALL ARMSTRONG NUMBER FROM 100 TO 999
#include<stdio.h>
int main(){
    int n,i,s,d;
    for(int i=100;i<=999;i++){
        n=i;
        int s=0;
        while(n>0){
            d=n%10;
        s=s+(d*d*d);
        n=n/10;
        }
        if(s==i){
            printf(" all the armstrong no from 100to 999 is: %d\n",i);
        }
    }
}
//  all the armstrong no from 100to 999 is: 153
//  all the armstrong no from 100to 999 is: 370
//  all the armstrong no from 100to 999 is: 371
//  all the armstrong no from 100to 999 is: 407