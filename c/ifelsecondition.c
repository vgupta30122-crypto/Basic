#include<stdio.h>
int main () {
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>18) {
        printf("adults\n");
        //if single single statment hoga to without {} execute ho jayega but {} always lagane hai
        printf("they can vote\n");
        printf("they can drive\n");
    }
    else {
        printf("not adults\n");
    }
    //yha kuch bhi print kre to vo both condition me print hoga 
    printf("thank you");
    return 0;
}