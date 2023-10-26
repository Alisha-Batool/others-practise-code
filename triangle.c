#include<stdio.h>

int main()
{
	int side1,side2,side3;
	printf("The length of side1 of triangle:");
	scanf("%d", &side1);
	printf("The length of side2 of triangle:");
	scanf("%d", &side2);
	printf("The length of side3 of triangle:");
	scanf("%d", &side3);
	if ((side1+side2>side3) && (side2+side3>side1) && (side3+side1>side2)){
		printf("it's form a valid triangle.");
	
	if(side1==side2 && side3!=side1,side2 ){
		printf("It's isosceles triangle.");
	}else if(side1==side2 && side2==side3 && side3==side1){
		printf("it's Equilateral triangle.");
	}else {
		printf("it's Scalene triangle.");
	}
    }
	else{
		printf("The sides do not form a valid triangle.\n");
	}
	return 0;
}