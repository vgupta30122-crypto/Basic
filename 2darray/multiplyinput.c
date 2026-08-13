#include<stdio.h>
int main(){
    //1st matrix ordre 
    int m;
    printf("enter the number rows of 1st matrix :");
    scanf("%d",&m);
    int n;
    printf("enter the number of colom of 1st matrix :");
    scanf("%d",&n);
    int a[m][n];
    //input 1 st matrix 
    printf("\nenter the element of 1st matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //2nd matrix order 
    int p;
    printf("enter the number rows of 2nd matrix :");
    scanf("%d",&p);
    int q;
    printf("enter the number colom of 2nd matrix :");
    scanf("%d",&q);
    int b[p][q];
    printf("\nenter the element of 1st matrix:");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //check 
    if(n!=p){
        printf("the matrix can not be multiply:");
    }
    else{
        //multi[[lication
       int res[m][q];
       for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res [i][j]=0;
            //i row of a j coloum of b
            for(int k=0;k<n;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
        printf("\n");
       } 
       //print output
       printf("the resultant matrix :\n"); 
       for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
    }
    printf("\n");
     
}
    }
}
// enter the number rows of 1st matrix :3
// enter the number of colom of 1st matrix :3

// enter the element of 1st matrix:
// 1 0 0
// 0 1 0
// 0 0 1
// enter the number rows of 2nd matrix :3
// enter the number colom of 2nd matrix :3

// enter the element of 1st matrix: 
// 1 0 0
// 0 1 0
// 0 0 1



// the resultant matrix :
// 1 0 0 
// 0 1 0 
// 0 0 1