#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int first =1;
        for(int j=0; j<=i;j++){
            printf("%d ",first);
            first = first*(i-j)/(j+1);
        }
        printf("\n");
    }
}
// enter a number:5
// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1