#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float area(float radius, float pi){
    float area=0;
    area= pi * radius *radius;
    return area;
}
int main()
{
    float radius;
    const float pi=3.14;
    printf("Enter the value of radius of a circle:");
    scanf("%f", &radius);
    float circleArea=area(radius,pi);
    // circle area must be greater than zero and not negative value.
    if(circleArea>0){
    printf("The value of area of a circle is: %f\n", circleArea);
    }else{
        printf("error.The radius must be a positive number.\n");
        // this message for non positive values
    }
    return 0;
}