#include<stdio.h>
int main() {
    int n;
    printf("enter a number of rows ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop no of line rows i
    for(int j=1;j<=i;j++){//inner loop no of star collom j
        printf("* ");
    }
    printf("\n");
}
    return 0;
}