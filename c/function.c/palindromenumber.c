#include<stdio.h>
int main(){
    int n,d,temp;
    int rev=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp  =n;
    while(n>0){
        d=n%10;
        rev = (rev*10)+d;
        n=n/10;
    }
    if(rev ==temp){
        printf("the no is pelindrome");

    }
    else{
        printf("the no is not pelindrome");
    }
}
// enter a number:1221
// the no is pelindrome