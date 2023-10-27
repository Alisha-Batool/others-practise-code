#include<stdio.h>
#include<stdlib.h>
int isPerfect(int number){
    int sum=0;
    for(int i=1; i<=number/2; i++){
        if(number%2==0){
        sum+=i;
        }if(sum==number){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if((isPerfect(number))){
        printf("%d is a perfect number.",number);
    }else{
        printf("%d is not a perfect number.",number);
    }
    return 0;
}