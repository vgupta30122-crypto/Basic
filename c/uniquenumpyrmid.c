#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n=");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
       // int a=i-1;
     for(int k=1;k<=nsp;k++){  // spaces ke liye loop 
        printf(" ");
     }
     nsp--;
     for(int j=1;j<=i;j++){  //number traingle
      printf("%d",j);
    }
     int a=i-1;
     for(int k=1;k<=i-1;k++){   
        printf("%d",a);
        a--;
     }
     printf("\n");
    }
}