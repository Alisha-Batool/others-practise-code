#include<stdio.h>

 void swap( int a, int b);
 void swap( int a, int b) {
 int tmp = a;
 a = b; b = tmp;
 return ;
}

int main()
{
  
int a =5, b = 8;

 printf( "a = %d, b=%d \n" , a,b);
 swap(a , b) ;
 printf( "a=%d,b= %d  \n " , a, b);
 return 0;
 
}