#include<stdio.h>
int main () {
    int marks;
    printf("enter a number(0-100) :");
    scanf("%d" ,&marks);

    if(marks>=0 && marks<=30) {
        printf("FAIL\n");
    } else if(marks>=30 && marks<=100) {

       printf("pass\n"); 
    } else {
       printf("wrong marks\n");  
    }
    return 0;

}