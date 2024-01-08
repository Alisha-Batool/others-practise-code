#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The array a is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    return 0;
}