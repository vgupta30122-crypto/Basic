#include<stdio.h>
int main () {
    int marks;
    printf("enter a number(0-100) :");
    scanf("%d" ,&marks);
    
    if(marks<30){
        printf("GRADE C\n");
    }
    else  if(marks>=30 && marks<70){
     printf("GRADE B\n");

    } else if(marks>=70 && marks<90){
       printf("GRADE A\n");
  
    } else{
       printf("GRADE A++\n");

    }
}