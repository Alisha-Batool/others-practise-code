#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char x, y;
    int z;
    printf("Enter the name of the book:");
    do
    {
        scanf("%c\n", &x);
    } while (x == '\n');
    
    printf("Enter the author name of the book:");
    do
    {
        scanf("%c\n", &y);
    } while (y == '\n');
    
    printf("Enter price of the book:");
    do
    {
        scanf("%d\n", &z);
    } while (z == '\n');
    return 0;
}