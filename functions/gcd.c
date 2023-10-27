#include <stdio.h>
 void gcd (int u, int v)
 {
 	int temp;
   while ( v != 0 ) {
    temp = u % v;
      u = v;
      v = temp;
 }
  
 }

 int main (void)
 {
 	int u,v;
 	printf("Enter the number:");
 	scanf("%d", &u);
 	printf("Enter the number:");
 	scanf("%d", &v);
    gcd(u,v);
   
   printf("u=%d , v=%d",u,v);
    
    return 0;
}