#include<stdio.h>
int main()
{
    int x;
    printf("give positive integer.");
    scanf("%d", &x);
    for(int i=0; i<=x;i+=2)
    {
        printf("the odd numbers are following: %d\n",i);
        int squares= i*i;
        printf("square of odd numbers are %d\n",  squares);
    }
    return 0;
}