/*#include<stdio.h>
int main() {
    int n;
    printf("enter a number of rows= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop no of line rows i
    for(int j=1;j<=i;j++){//inner loop no of star collom j
        printf("%d ",j);
    }
    printf("\n");
}
    return 0;
}
enter a number of rows= 4
1 
1 2 
1 2 3 
1 2 3 4 */
#include<stdio.h>
int main() {
    int n;
    printf("enter a number of rows= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop no of line rows i
    for(int j=1;j<=n+1-i;j++){//inner loop no of star collom j
        printf("%d ",j);
    }
    printf("\n");
}
    return 0;
}
/*enter a number of rows= 5
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 */
