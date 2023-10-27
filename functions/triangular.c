//Function to calculate the nth triangular number
 // Function to calculate the nth triangular number
 #include <stdio.h>
 void calculateTriangularNumber ( int n )
 {
   int i, triangularNumber = 0;
   for ( i = 1; i <= n; ++i )
   triangularNumber += i;
   printf ("Triangular number %i is %i\n", n, triangularNumber);
 
 }
 int main (void)
 {
 
   calculateTriangularNumber (200);
   calculateTriangularNumber (20);
   calculateTriangularNumber (50);
   return 0;
 }
