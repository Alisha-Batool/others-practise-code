#include<stdio.h>
#include<math.h>
int main()
{
	float number, xPrev, xCurrent, guess, calculatedError;
	const float errorRate= 0.00001f;
	printf("Enter the number whose square root is to be approximate: ");
	scanf("%f", &number);
	xPrev= guess;

	do
	{
		xCurrent= 0.5* (xPrev + number/xPrev);
		calculatedError= fabs(xCurrent-xPrev);
		xPrev= xCurrent;
	}while(calculatedError>errorRate);
	
	printf("The square root approximated is %f\n ",xPrev,xCurrent);
	return 0;
}