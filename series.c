#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int PrevNum,PrevDen,CurrNum,CurrDen;
	PrevNum=2;
	PrevDen=1;
	CurrNum=3;
	CurrDen=2;
	float sum= (float)(PrevNum) / PrevDen + (float)(CurrNum) / CurrDen;
	
	printf("%.f\n", (float)(PrevNum) / PrevDen);
	printf("%.f\n", (float)(CurrNum) / CurrDen);
	
	for(int i=3; i<=20; i++){
		int GenNum, GenDen;
		GenNum = PrevNum + CurrNum;
		GenDen = PrevDen + CurrDen;
        float fraction=  (float)(GenNum) / GenDen;
		printf("%.f\n ", fraction);
		sum = sum + fraction ;
		PrevNum = CurrNum;
		PrevDen = CurrDen;
		CurrNum = GenNum;
		CurrDen = GenDen;
	}
	printf("The sum of 20th term  is %f\n",sum);
	return 0;
}