#include <stdio.h>
// display GP 1 2 4 8 16 ...
int main()
{
    int n;
    printf("enter the value of =");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }
    return 0;
}