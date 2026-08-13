#include<stdio.h>
int main(){
    int n ,product =1;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n;i++){
        product =product*arr[i];
        printf("\n%d\n",product);

    }
}
// Enter the size of the array:5
// 2
// 3
// 4
// 5
// 6

// 2

// 6

// 24

// 120

// 720