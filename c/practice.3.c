#include<stdio.h>
int main () {
     char ch;
    printf("enter a charecter :");
    scanf("%c" ,&ch);

    if(ch>='A' && ch<='z'){
      printf("upper case  \n");
    }else if (ch>='a' && ch<='Z') {
    printf("LOWER case  \n");
    }
     else {
       printf("not english letter  \n"); 
     }
     return 0;
    }
