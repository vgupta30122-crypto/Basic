#include<stdio.h>
int main() {
    int n;
     
    printf("enter a number of rows= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop no of line rows i
        int a=1;
    for(int j=1;j<=i;j++){//inner loop no of star collom j
        int d =a+64;//d=65
        char ch=(char)d;//(ch=char)65   ch=A

        printf("%c ",ch);
        a++;
    }
    printf("\n");
}
    return 0;
}