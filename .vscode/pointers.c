#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
    return 0 ;
}
void incr(int *c)
{
    *c = *c + 1;
}
int main()
{
    //int a = 4;
    //int *pa = &a;
    //float b = 3.1;
   // float *pb = &b;
    //printf("a = %d\n", a);
    // printf("b = %f\n", b);
    // printf(" pa = %d\n", pa);
    // printf(" pb = %f\n", pb);
    // printf(" *pa = %ld\n", *pa);
    // printf(" *pb = %f\n", *pb);
    // float a = 4.1;
    // float *p = &a;
    // printf(" p= %f\n", p);
    // p = &b;
    // printf(" *p= %f\n", *p);
    // printf(" p= %f\n", p);
    // *p = 7.2;
    // p = &a;
    // *p = 5.3;
    // printf(" a= %f\n", a);
    // printf(" b= %f\n", b);
    int a = 5;
    int b = 6;
    printf("before swapping: a=%d , b=%d\n", a,b);
    swap(&a,&b);
    printf("After swapping: a=%d , b=%d\n", a,b);
    int c =5, *p = &c;
    printf("%d\n", *p);
    incr(&c);
    printf("%d\n", c);
    printf("%d\n", *p);
     return 0;
}