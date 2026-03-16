#include<stdio.h>
int main() {
    int n;
    printf("enter a number of rows ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){//outer loop no of line rows
    for(int j=1;j<=n;j++){//inner loop no of star collom
        if(i == 1 || i == n || j==1 || j==n || i == j || i + j == n+1) printf("* ");
        else 
               printf("  ");
            }
                      //  if(i == j || i + j == n+1) printf("* ");
          //  else printf("  ");
        
    
    printf("\n");
}
    }

