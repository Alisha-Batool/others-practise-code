#include<stdio.h>
// function
int maxofThree(int a, int b, int c){
    int max;
    if (a>b && a>c){
        max=a;
    }
    if(b>a && b>c){
        max=b;
    }
     if(c>a && c>b){
        max=c;
    }
    return max;
}
int main()
{
    int num1,num2,num3;
    printf("enter three numbers:\n");
    scanf("%d %d %d", &num1,&num2,&num3);
    int result= maxofThree(num1,num2,num3);
    printf("the maximum value is: %d ", result);
    return 0;

}