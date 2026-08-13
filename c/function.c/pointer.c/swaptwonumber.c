// #include<stdio.h>
// void swap(int *x,int*y){
//     int temp;
//     temp =*x;//temp =2
//     *x =*y;//a=9
//     *y=temp; //*y=2  b=2
//     return;
// }
// int main(){
//     int a=2;
//     int b=9; 
//     swap(&a,&b);
//     printf("the value of a is %d\n",a);
//      printf("the value of b is %d\n",b);
//  }
// the value of a is 9
// the value of b is 2
#include<stdio.h>
int main(){
    int a=25;
    int *x =&a;
    int **y=&x;
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0;
}
//output 
// 25
// 25
// 25