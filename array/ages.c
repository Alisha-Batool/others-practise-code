#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int ages[5];
    //  int personNumber = 1, index = 0;
    //  for (int i=0; i<5; i++)
    //  {
    //      printf("Person %d, Enter your age: ", personNumber);
    //      scanf("%d", &ages[index]);
    //      personNumber++;
    //      index++;
    //  }
    int totalPeople;
    printf("How many people are there? ");
    scanf("%d", &totalPeople);
    int ages[totalPeople];
    for (int i = 0; i < totalPeople; i++)
    {
        printf("Person %d, Enter your age:", i + 1);
        scanf("%d", &ages[i]);
    }
    for (int i = 0; i < totalPeople; i++)
    {
        printf("%d,", ages[i]);
    }
    printf("\n");
    return 0;
}