#include<stdio.h>
int palindrome(int number);
int palindrome(int number){
    int originalnumber,reverse=0,remainder;
    originalnumber=number;
    while(number!=0){
        remainder= number % 10;
        reverse= reverse * 10 + remainder;
        number /= 10;
    }
    if (reverse==originalnumber){
        return 1;
    }else{
        return 0;
    }
    return 0;
}
int main()
{
    int number;
    printf("Enter a number.");
    scanf("%d", &number);
    if(palindrome(number)){
        printf("%d is a palindrome number", number);
    }else{
        printf("%d is not a palidrome number", number);
    }
    return 0;
}