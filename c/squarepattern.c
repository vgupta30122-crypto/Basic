/*#include<stdio.h>
int main() {
    int n;
    printf("enter a number of rows ");
    scanf("%d",&n);
    //int n;
    printf("enter a number of colums ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop no of line rows
    for(int i=1;i<=n;i++){//inner loop no of star collom
        printf("*");
    }
    printf("\n");
}
    return 0;
}*/
#include<stdio.h>
int main() {
    int n;
    printf("enter a number of rows ");
    scanf("%d",&n);
    //int n;
    //printf("enter a number of colums ");
    //scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop no of line rows
    for(int i=1;i<=n;i++){//inner loop no of star collom
        printf("%d",i);
    }
    printf("\n");
}
    return 0;
}
