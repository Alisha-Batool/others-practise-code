#include<stdio.h>

int main()
{
    //read in a sequence of character,one at a time
    char input;
    int vowels=0;
    int consonants=0;
    do
    {
        // read in singal char value 
        scanf("%d\n", &input);
        // update counters
        if ( (input=='a' || input=='A') || (input=='e' || input=='E') || (input=='i' || input=='I') || (input=='o' || input=='O') || (input=='u' || input=='U'))
        {
            vowels++;
            if((input>='a' && input<='z') || (input>='A' && input<='Z'))
            {
                consonants++;
            }
            return 1;
        }
    }while (input='\n');
    
    printf("Number of vowels= %d \n Number of consonants= %d\n" );
    
    return 0;
    }