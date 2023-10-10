#include <stdio.h>

int main ()
{
    double dollar, pound, jpy;
    printf("Please enter your dollar amount: ");
    scanf("%lf", &dollar);
    double fee = dollar * 0.1;
    double dollar_left = dollar - fee;
    pound = dollar_left * 0.5 * 0.79;
    jpy = dollar_left * 0.5 * 127.65;
    printf("After deducting a %.2lf USD exchange fee, you will get %.2lf GBP and %.lf JPY.\n", fee, pound, jpy);
    
    return 0;
}
