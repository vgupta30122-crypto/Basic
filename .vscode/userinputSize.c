#include <stdio.h>
int main()
{
    int  n;

    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
// Enter the size of the array:5 
// 1
// 2
// 3
// 4
// 5
// 12345