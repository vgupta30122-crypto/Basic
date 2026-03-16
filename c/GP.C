#include<stdio.h>
//display GP 1 2 4 8 16 ...
int main () {
    int n ,a=1;
    printf("enter the value of =");
    scanf("%d",&n);
    for (int i=1; i<=(a*rpow (n-1)); i=i+3) {
    printf(" %d ",i);
}
return 0;
}