#include<stdio.h>
int main() {
        int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>=18) {
        printf("adults\n");
}
else if(age > 13 && age < 18) {
    //maximum else if condition lga sakte ha
   // else if ( condition)
   // else if ( condition)
    printf("teenager\n");
}
else {
    printf("child");
}

}