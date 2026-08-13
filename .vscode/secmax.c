#include<stdio.h>
int main(){
    #include<limits.h>
    int n;//max=-1;ye krne pr positive ke liye to valid hai but negative ke liye nhi
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    int secmax = INT_MIN;
    int max =INT_MIN;//sabse chotta number
    for(int i=0;i<n;i++){
       if(max<arr[i]){
        max =arr[i];
       }
    }
    for(int i=0;i<n;i++){
       if(secmax<arr[i] &&arr[i]!=max){
        secmax =arr[i];
       }
    }
       printf("THE SEC MAXIMUM VALUE IS:%d",secmax);
       

    }
//     Enter the size of the array:5
// 1
// 2
// 3
// 4
// 5
// THE SEC MAXIMUM VALUE IS:4