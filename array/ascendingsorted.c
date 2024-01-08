#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10] = {21, 3, 5, 8, 5, 11, 22, 14, 51, 9};
    int n = 10;
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The ascending order is:");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}