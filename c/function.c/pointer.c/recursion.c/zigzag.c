#include<stdio.h>
void zigzag(int n){
    if(n==0) return;
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    return;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    zigzag(n);
    return 0;
}
// enter the number:1
// 1 1 1 
// enter the number:4
// 4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4 