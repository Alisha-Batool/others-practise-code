#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float area(float radius, float pi){
    float area=0;
    area= pi * radius *radius;
    
}
int main()
{
    float radius;
    const float pi=3.14;
    printf("Enter the value of radius of a circle:");
    scanf("%f", &radius);
    radius=area(radius,pi);
    if(area(radius,pi)){
    printf("The value of area of a circle is: %f\n", radius);
    }else{
        printf("error.");
    }
    return 0;
}