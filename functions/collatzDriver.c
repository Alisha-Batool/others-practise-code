#include<stdio.h>
#include<stdlib.h>
#include"collatzconjecture.h"

int main()
{
    int number;
    printf("what number would you like to see?");
    scanf("%d\n",&number);
    printCollatzconjecture(number);
    return 0;
}