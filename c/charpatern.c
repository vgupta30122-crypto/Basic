/*#include<stdio.h>
int main(){
    int a,n;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1;
        else a = 0;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            if (a==0) a =1;
            else a=0;
        }
        printf("\n");
    }
        //both code are same logic different this is my logic 2
  //condition if(i+j)%2==0) bhi correct hai 
}*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        if(i==j||(i+j)%2==0) printf("1 "); 
      else printf("0 ");
      }
      printf("\n");
    }
}