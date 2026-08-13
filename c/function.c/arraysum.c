// #include<stdio.h>
// int main(){
//     int a[100],n,i;
//     int sum =0;
//     printf("enter  the no of element in array");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         sum =sum +a[i];
//     }
//     printf("the sum of all arry elements is=%d",sum);

// }
// enter  the no of element in array5
// 6 7 8 9 0 
// the sum of all arry elements is=30
#include<stdio.h>
int main(){
    int a[100],i,n;
    int sum =0;
    printf("enter the element in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum =sum+a[i];
    }
    printf("the sum of the elements in array:%d",sum);

}
// enter  the no of element in array5
// 6 7 8 9 0 
// the sum of all arry elements is=30
//practice hai