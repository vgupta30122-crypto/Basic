#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n=");
    scanf("%d",&n);
    int  nst =n;
    int  nsp =1;
    for (int i=1; i<=2*n+1; i++){//phli line 
        printf("%d",i);
    }
    printf("\n");
    for (int i=1; i<=n; i++){
        int a=1;
        for( int j=1; j<=nst;j++){//for star
          printf("%d",a);
          a++;
        }
        for (int k=1; k<=nsp; k++){//for spaces
          printf(" ");
          a++;
        }  
    for(int j=1; j<=nst;j++){//for star
          printf("%d",a);
          a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}
