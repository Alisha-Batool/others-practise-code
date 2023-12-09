#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// using logic of steve of exastothene
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}