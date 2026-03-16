#include<stdio.h>
int main() {
    int s1 ,s2,s3,s4,s5,s6,s7,s8,s9;
    printf("enter the marks of s1=");
    scanf("%d",&s1);
   printf("enter the marks of s2=");
    scanf("%d",&s2);
    printf("enter the marks of s3=");
    scanf("%d",&s3);
    printf("enter the marks of s4=");
    scanf("%d",&s4);
    printf("enter the marks of s5=");
    scanf("%d",&s5);
    printf("enter the marks of s6=");
    scanf("%d",&s6);
    printf("enter the marks of s7=");
    scanf("%d",&s7);
    printf("enter the marks of s8=");
    scanf("%d",&s8);
    printf("enter the marks of s9=");
    scanf("%d",&s9);


    if(s1>=90&& s1<=100) {
        printf("GRADE A+\n");
    } 
    else if( s1>=80&&s1<90) {
        printf("GRADE A\n");
    } else if(s1>=70&& s1<=80) {
        printf("GRADE B+\n");
    } else if( s1>=60 && s1<=70) {
        printf("GRADE B\n"); 
    } else if(s1>=50 && s1<=60) {
        printf("GRADE C\n");  
    } else if(s1>=45 && s1<=50) {
        printf("GRADE D\n");
    } else if( s1>=40 && s1<=45) {
        printf("GRADE E\n"); 
    } else if( s1<40) {
        printf("FAIL\n"); 
    }
    if(s2>=90&& s2<=100) {
        printf("GRADE A+\n");
    } 
    else if( s2>=80&&s2<90) {
        printf("GRADE A\n");
    } else if(s2>=70&& s2<=80) {
        printf("GRADE B+\n");
    } else if( s2>=60 && s2<=70) {
        printf("GRADE B\n"); 
    } else if(s2>=50 && s2<=60) {
        printf("GRADE C\n");  
    } else if(s2>=45 && s2<=50) {
        printf("GRADE D\n");
    } else if( s2>=40 && s2<=45) {
        printf("GRADE E\n"); 
    } else if( s2<40) {
        printf("FAIL\n"); 
    }
    // if(s1>=90&& s1<=100) {
    //     printf("GRADE A+\n");
    // } 
    // else if( s1>=80&&s1<90) {
    //     printf("GRADE A\n");
    // } else if(s1>=70&& s1<=80) {
    //     printf("GRADE B+\n");
    // } else if( s1>=60 && s1<=70) {
    //     printf("GRADE B\n"); 
    // } else if(s1>=50 && s1<=60) {
    //     printf("GRADE C\n");  
    // } else if(s1>=45 && s1<=50) {
    //     printf("GRADE D\n");
    // } else if( s1>=40 && s1<=45) {
    //     printf("GRADE E\n"); 
    // } else if( s1<40) {
    //     printf("FAIL\n"); 
    // }

}