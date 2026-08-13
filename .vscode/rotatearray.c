#include<stdio.h>
void reverse (int arr[],int a,int b){
 for(int i=a,j=b;i<j;i++,j--){
    int temp =arr[i];
    arr[i] =arr[j];
    arr[j]=temp;
}
return;
}
int main(){
     int  n,k;

    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf("Enter thevalue of the k:");
    scanf("%d", &k);
    k=k%n;
    reverse (arr,0,n-1);
    reverse (arr, 0,k-1);
    reverse (arr, k,n-1); 
    for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
}
}
//homework done 
// Enter the size of the array:7
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// Enter thevalue of the k:3
// 5 6 7 1 2 3 4  