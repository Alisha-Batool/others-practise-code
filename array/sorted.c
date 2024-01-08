#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[8]={3,14,15,18,22,35};
    int n;
    printf("Enter the integer that is to be inserted:");
    scanf("%d", &n);
    int i=5;
    while (i >= 0 && a[i] > n)
    {
        a[ i + 1 ]= a[i];
        i--;
    }
    a[ i + 1 ]= n;
    printf("The updated array is:");
    for (int j = 0; j < 7; j++)
    {
        printf("%d," , a[i]);
    }
    return 0;
}