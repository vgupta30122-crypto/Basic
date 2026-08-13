#include<stdio.h>
void increasingdecreasing(int n){
    if(n==0) return ;
    printf("%d\n",n);
    increasingdecreasing(n-1);
    printf("%d\n",n);
    return;
}
    int main(){
        int n;
        printf("enter the number ");
        scanf("%d",&n);
        increasingdecreasing(n);
        return 0;

    }
  //homework hai done 
// enter the number 6
// 6
// 5
// 4
// 3
// 2
// 1
// 1
// 2
// 3
// 4
// 5
// 6

