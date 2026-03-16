#include<stdio.h>
int main(){
    char ch;
    int n;
    printf("enter the value of n=");
    scanf("%d",&n);
    int  nst =n;
    int  nsp =1;
    for (int i=1; i<=2*n+1; i++){//phli line 
        printf("%c",ch);
    }
    printf("\n");
    for (int i=1; i<=n; i++){
        int A=65;
        for( int j=1; j<=nst;j++){//for star
          printf("%c",A);
          A++;
        }
        for (int k=1; k<=nsp; k++){//for spaces
          printf(" ");
          A++;
        }  
    for(int j=1; j<=nst;j++){//for star
          printf("%C",A);
          A++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}
