#include<stdio.h>
int main(){
    int n;
   //int  nst =n;
    //int  nsp =1;


    printf("enter the value of n=");
    scanf("%d",&n);
    int  nst =n;
    int  nsp =1;
    for (int i=1; i<=n; i++){
        for( int j=1; j<=nst;j++){//for star
          printf("*");
        }
        for (int k=1; k<=nsp; k++){//for spaces
          printf(" ");
        }  
    for( int j=1; j<=nst;j++){//for star
          printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}