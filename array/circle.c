#include <stdio.h>
#include <math.h>
void printCicle(int r){
    for (int i = -r; i <=r; i++)
    {
        for (int j = -r; i <=r; j++)
        {
            double distance= sqrt(i*i + j*j);
            if (r - 0.5 <= distance && distance >= r + 0.5 )
            {
                printf("# ");
            }
            else if(distance <= r)
            {
                 printf("* ");
            }
            else
            {
                printf(". ");
            }
            printf("\n");
        }
        
    }
    
}
int main()
{
    int r;
    printf("Give the value of r: ");
    scanf("%d", &r);
    printCicle(r);
    return 0;
}
   