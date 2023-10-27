#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float area(float radius, float pi){
    float area=0;
    area= pi * radius *radius;
    return 1;
}
int main()
{
    float radius;
    const float pi=3.14;
    printf("Enter the value of radius of a circle:");
    scanf("%f", &radius);
    if(area(radius,pi)){
    printf("The value of area of a circle is:%f\n", area);
    }else{
        printf("error.");
    }
    return;
}