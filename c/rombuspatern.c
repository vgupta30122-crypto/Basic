#include<stdio.h>
int main() {
    int n ;
    printf("enter a number = ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){//outer loop no of line rows i
    for(int j=1;j<=n+i-1;j++){//inner loop no of star collom j
        if(j<i){
        printf(" ");
        }
        else
        printf("* ");
    }
        printf("\n");
        
    }
    return 0;
}
