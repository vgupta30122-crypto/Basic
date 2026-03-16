#include<stdio.h>
int main () {
    int n;
    printf("enter the value of rows");
    scanf("%d",&n);
    // for(int i=1; i<=n;i++){
    //     for(int j=1; j<=n;j++){
    //         if(i == 1 || i == n || j==1 || j==n) printf("* ");
    //         else {
    //            printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    for(int i = 1; i <= n; i++){
        for(int j = 1;j <= n; j++){
            if(i == j || i + j == n+1) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    

} 

/*

`
*/
//printf("\n");
//}
//return 0;
//}
/*#include<stdio.h>
int main () {
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for("int i=0;i<=n;i++"){ 
    for("int j=0;j<=i;j++"){   
    printf("* ");  
    }
 printf("\n");     
}
    //int n;
}
#include<stdio.h>
int main() {
    int n;
    printf("enter a number of rows ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}
    // */     *
    //        *
    //    * * * * *
    //        * 
    //        * 