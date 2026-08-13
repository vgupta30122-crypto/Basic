#include<stdio.h>
int main(){
    int n;//max=-1;ye krne pr positive ke liye to valid hai but negative ke liye nhi
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
       if(max<arr[i]){
        max =arr[i];
       }
    }
       printf("THE MAXIMUM VALUE IS:%d",max);
       

    }
//     Enter the size of the array:5
// 2
// 3
// 4
// 5
// 6
//THE MAXIMUM VALUE IS:6
