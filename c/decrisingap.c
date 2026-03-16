#include<stdio.h>
//display this AP-4,7,10.......
//for (int i=4; i<=(2*n-1); i=i+3) {esme change kro ap formula lago ans pao 2n-1 general hai baki question ke acc nth trrm nikalna padega 
int main () {
    int n ,a =4;
    printf("enter the value of =");
    scanf("%d",&n);
    //a>0 condition bhi shi hai 
    for (int i=4; i<=n; i=i++) {
    printf(" %d ",a);
    a = a+3;
}
return 0;
}