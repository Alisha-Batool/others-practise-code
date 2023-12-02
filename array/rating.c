#include <stdio.h>
#include <stdlib.h>
void demoratingsCounter()
{
    // ask 20 people for the rating [1-10] for a specific show
    //  print the highest noted rating by the audience
    int ratingCounter[11] = {0};
    int totalViewers = 10;
    for (int i = 1; i <= totalViewers; i++)
    {
        int rating;
        printf("what would you rate this show? ");
        scanf("%d", &rating);
        ratingCounter[rating]++;
    }
    int max = 0, indexofmax = 0;
    for (int i = 0; i < 11; i++)
    {
        if (ratingCounter[i] > max)
        {
            max = ratingCounter[i];
            indexofmax = i;
        }    
    }
    printf("According to %d people out of 10, the show is rated as %d", max, indexofmax);
}
int main()
{
    demoratingsCounter();
    return 0;
}