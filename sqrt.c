#include<stdio.h>
#include<math.h>
int main()
{
	float number, xPrev, xCurrent, guess, calculatedError;
	const float errorRate= 0.00001f;
	printf("Enter the number whose square root is to be approximate: ");
	scanf("%f", &number);
	xPrev= guess;
     
     if (number < 0){
        printf("Square root of a negative number is undefined.\n");
        return 1;
    }
     
	do
	{
		xCurrent= 0.5* (xPrev + number/xPrev);
		calculatedError= fabs(xCurrent-xPrev);
		xPrev= xCurrent;
        if (xCurrent > errorRate) {
            printf("Square root approximation exceeded maximum threshold.\n");
            return 1;
        }
	}while(calculatedError>errorRate);
	
	printf("The square root approximated value is %f\n ",xPrev);
	return 0;
}
