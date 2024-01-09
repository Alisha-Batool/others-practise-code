#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
void incr(int *c)
{
    *c = *c + 1;
}
void strcopy(char *p1, char *p2)
{
    while (*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
}
int main()
{
    // char str1[]= "abserds";
    // char *str2= "xxxxx";
    // strcpy(str1,str2);
    // printf("%s\n", str1);
     char *str1= "Hello world!";
     char str2[16];
     strcopy(str1,str2);
    // char *p1 = str1;
    // char *p2 = str2;
    // while (*p1 != '\0')
    // {
    //     *p2 = *p1;
    //     p1++;
    //     p2++;
    // }
    // *p2 = '\0';
     printf("%s\n", str1);
     printf("%s\n", str2);

    // char *str1 = "Hello";
    // char *str2 = "world";
    // char str[16];
    // strcpy(str, str1);
    // strcat(str, " ");
    // strcat(str, str2);
    // printf("%s\n", str);

    // int a = 4;
    // int *pa = &a;
    // float b = 3.1;
    // float *pb = &b;
    // printf("a = %d\n", a);
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
    // printf("before swapping: a=%d , b=%d\n", a,b);
    // swap(&a,&b);
    // printf("After swapping: a=%d , b=%d\n", a,b);
    // int c =5, *p = &c;
    // printf("%d\n", *p);
    // incr(&c);
    // printf("%d\n", c);
    // printf("%d\n", *p);
    // char *str1= {"Hello"};
    // char str2[]= {"Hello"};
    // char str3[]= {'H', 'e','l','l', 'o','\0'};
    // char str4[]= {'H','e','l','l','o'}; // it is different
    // printf("%s\n", str1);
    // printf("%s\n", str2);
    // printf("%s\n", str3);
    // printf("%s\n", str4);
    return 0;
}