#include<stdio.h>
int main()
{
    int x;
    printf("give positive integer.");
    scanf("%d", &x);
    for(int i=0; i<=x;i+=2)
    {
        printf("the odd numbers are following: %d\n");
        
    }
    return 0;
}