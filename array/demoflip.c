#include <stdio.h>
#include <stdlib.h>
void demoFlip()
{
    // arrays initializer
    int nums[] = {3, 21, 5, 8, 11, 22, 14, 9, 51};
    int i = 0, j = 9;
    
    printf("Before the flip:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", nums[i]);
    }
    printf("\n");
    
    while (i < j)
    {
        int temp;
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    printf("After the flip:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", nums[i]);
    }
    
}
int main()
{
    demoFlip();
    return 0;
}