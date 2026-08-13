#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    int totalways =stair(n-1) +stair(n-2);
    return totalways;
}
int main(){
    int n;
    printf("enter the nummber ");
    scanf("%d",&n);
    int ways =stair(n);
    printf("%d",ways);
    return 0;
}
//enter the nummber 5
//8
#include<stdio.h>
int stair(int n){
    if(n<=3) return n;
    // if(n==1) return 1;
    // if(n==2) return 2;
    int totalways =stair(n-1) +stair(n-2) +stair(n-3);
    return totalways;
}
int main(){
    int n;
    printf("enter the nummber ");
    scanf("%d",&n);
    int ways =stair(n);
    printf("%d",ways);
    return 0;
}
//hw hai done 
//enter the nummber 5
//11