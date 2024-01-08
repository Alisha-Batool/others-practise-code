#include <stdio.h>
#include <stdlib.h>
void demoVla()
{
    int n;
    printf("How many students are there?:");
    scanf("%d", &n);
    float marks[n];
    // populate the array with user provided marks
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks for student %d:", i + 1);
        scanf("%f", &marks[i]);
    }
    // calculate the average marks
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
        // sum+=marks[i]
    }
    printf("Average score is %.2f", sum / n);
}
int main()
{
    demoVla();
    return 0;
}