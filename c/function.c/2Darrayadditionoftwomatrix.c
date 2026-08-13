#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("enter the dimenstion of matrix :");
    scanf("%d%d",&m,&n);
    printf("enter a first matrix");
    for(int i=0;i<m;i++){

    for(int j=0;j<n;j++){
    
    scanf("%d",&a[i][j]);
    }
printf("enter a second matrix");
    for(int i=0;i<m;i++){
    
    for(int j=0;j<n;j++){
    
    scanf("%d",&b[i][j]);
    }
}

for(int i=0;i<m;i++){


for(int j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];{


printf("the resultant addition matrix is:");
for(int i=0;i<m;i++){
  for(int j=0;j<n;j++)  {
    printf("%d",c[i][j]);

  }
  printf("\n");
}
}
}
    }
}
