/*#include<stdio.h>
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact =fact*i;
    }
   return fact;
}
int main(){
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    int r;
    printf("enter a number r:");
    scanf("%d",&r);
    int nfact =factorial(n);
    int rfact =factorial(r);
    int nrfact =factorial(n-r);
    int ncr =nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}
//enter a number n:7
//enter a number r:3
//35*/
#include<stdio.h>
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact =fact*i;
    }
   return fact;
}
int combination(int n ,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
    int main(){
        int n;
        printf("enter a number n:");
    scanf("%d",&n);
    int r;
    printf("enter a number r:");
    scanf("%d",&r);
    int ncr=combination(n,r);  
    printf("%d",ncr);
    return 0;     
    }

