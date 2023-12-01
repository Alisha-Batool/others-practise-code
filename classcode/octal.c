#include<stdio.h>

int main()
{
    int number, octalNumber=0;
    int placeHolder=1;

    printf("Enter the number between 0 and 32767:");
    scanf("%d", & number);
    if(number<0){
        printf("Error. Negative number!");
        return 1;
    }
    while(number>0)
    {
        int rem= number % 8;
        octalNumber= placeHolder * rem + octalNumber;
        placeHolder= placeHolder * 10;
        number= number / 8;
    }
    printf("in octal your number is %d\n", octalNumber);
    return 0;
}