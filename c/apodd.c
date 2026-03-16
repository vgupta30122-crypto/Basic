#include<stdio.h>
//display this AP-4,7,10.......
//for (int i=4; i<=(2*n-1); i=i+3) {esme change kro ap formula lago ans pao 2n-1 general hai baki question ke acc nth trrm nikalna padega 
int main () {
    int n;
    printf("enter the value of =");
    scanf("%d",&n);
    for (int i=100; i<=(2*n-1); i=i+3) {
    printf(" %d ",i);
}
return 0;
}