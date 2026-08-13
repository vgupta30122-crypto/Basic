// #include<stdio.h>
// int main(){
//     int i,n,a[100],min,max;
//     printf("enter the no of elements in array:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);

//     }
//     min =max=a[0];
//     for(int i=0;i<n;i++){
//         if(a[i]<min){
//             min =a[i];
//         }
//         if(a[i]>max){
//             max =a[i];
//         }
//     }
//     printf("the maximum value are:%d\n",max);
//     printf("the minimum value are:%d\n",min);

//     }
//     enter the no of elements in array:6
// 1 2 3 5 6 8 
// the maximum value are:8
// the minimum value are:1
#include<stdio.h>
int main(){
    int n,i,a[100],min ,max;
    printf("enter the no of elements in array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     min =max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("the max value are :%d\n",max);
    printf("the min value are :%d\n",min);
}
// enter the no of elements in array:6
// 2 4 5 6 8 7
// the max value are :8
// the min value are :2
//practice