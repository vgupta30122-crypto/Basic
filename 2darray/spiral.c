#include<stdio.h>
int main(){ 
    int m;
    printf("enter the number rows of 1st matrix :");
    scanf("%d",&m);
    int n;
    printf("enter the number of colom of 1st matrix :");
    scanf("%d",&n);
    int a[m][n];
    printf("\nenter the element of 1st matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //spiral print 
    printf("\n");
    int minr=0;
    int maxr =m-1;
    int minc =0;
    int maxc=n-1;
    int tne=m*n;
    int count =0;
    while(count <tne){
        //print the minmum row 
        for(int j=minc;j<=maxc;j++){//ya phir sb me for(int j=maxc;j>=minc && count<tne;j--)
            printf("%d ",a[minr][j]);//if(count >=tne)break;
            count ++;

        }
        minr++;
        if(count >=tne)break;
        //print the max colom
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
            count ++;
        }
        maxc--;
        if(count >=tne)break;

        //print the max row
        for(int j=maxc;j>=minc;j--){
        printf("%d ",a[maxr][j]);
        count ++;
        }
        maxr--;
        if(count >=tne)break;
        //print the minmum colom
        for(int i=maxr;i>=minr;i--){
        printf("%d ",a[i][minc]);
        count ++;
        }
        minc++;
        if(count >=tne)break;

    } 
}
// enter the number rows of 1st matrix :3
// enter the number of colom of 1st matrix :4

// enter the element of 1st matrix:
// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12 

// 1 2 3 4 8 12 11 10 9 5 6 7