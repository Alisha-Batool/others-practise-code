#include<stdio.h>
int main()
{
    for(int num=0; num<=100; num++){
        if(num % 3==0 && num % 5==0){
            print("FizzBuzz\n");
        }else if(num % 3==0){
            printf("Fizz\n");
        }else if(num % 5==0){
            printf("Buzz\n");
        }
         else {
            printf("%d\n", num);
    }
}
return 0;
}