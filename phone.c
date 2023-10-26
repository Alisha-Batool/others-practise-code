#include<stdio.h>

int main()
{
    char token;
    printf("enter the phone:");
    scanf("%c", &token);
    
     do{   
        if(token=='A' || token=='B' || token=='C')
        {
            printf("2");
        }
        else if(token=='D' || token=='E' || token=='F')
        {
            printf("3");
             
        }
        else if(token=='G' || token=='H' || token=='I')
        {
            printf("4");
             
        }
        else if(token=='J' || token=='K' || token=='L')
        {
            printf("5");
            
        }
        else if(token=='M' || token=='N' || token=='O')
        {
            printf("6");
             
        }
        else if(token=='P' || token=='Q' || token=='R' || token=='S')
        {
            printf("7");
            
        }
        else if(token=='T' || token=='U' || token=='V' || token=='W')
        {
            printf("8");
            
        }
        else if(token=='x' || token=='Y' || token=='Z')
        {
            printf("9");
            
        }
        else
        {
            printf("%c", &token);
            return 0;
        }
     }while(1);
    return 0;
}