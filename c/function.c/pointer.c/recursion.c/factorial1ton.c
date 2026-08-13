#include <stdio.h>
void increasing(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing (x+1,n);
    return;
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
// enter the number5
// 1
// 2
// 3
// 4
// 5