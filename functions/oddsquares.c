#include<stdio.h>
#include<stdlib.h>
int printoddsquares(int number);
int printoddsquares(int number){
    for(int i=1; i<=number; i++){
        if(i%2!=0){
            printf("%d", i*i);
        }
    }
    return 0;
}
int main()
{
    int number;
    printf("enter a positive integer.");
    scanf("%d", &number);
    printoddsquares(number);
    return 0;

}