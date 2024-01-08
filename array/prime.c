#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #include<stdbool.h>
//A function to check if a number is prime or not
// bool isPrime(int num)
// {
//     // If the number is less than or equal to 1, it is not prime
//     if (num <= 1)
//     {
//         return false;
//     }
//     // If the number is 2, it is prime
//     if (num == 2)
//     {
//         return true;
//     }
//     // If the number is even, it is not prime
//     if (num % 2 == 0)
//     {
//         return false;
//     }
//     // Loop from 3 to the square root of the number, with a step of 2
//     for (int i = 3; i <= sqrt(num); i += 2)
//     {
//         // If the number is divisible by any odd number, it is not prime
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     // If the loop ends without finding a divisor, the number is prime
//     return true;
// }
// using logic of sieve of Eratosthenes
int isPrime(int num)
{
    if (num <= 1)
    {  // if the num is less than or equal to one, it is not a prime number
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