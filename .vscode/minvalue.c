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
    int min=arr[0];
    for(int i=0;i<n;i++){
       if(min>arr[i]){
        min =arr[i];
       }
    }
       printf("THE MinIMUM VALUE IS:%d",min);
       

    }
//     Enter the size of the array:5
// 2
// -1
// 4
// 6
// 7
// THE MinIMUM VALUE IS:-1