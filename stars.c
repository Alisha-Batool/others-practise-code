#include<stdio.h>
int main()
{
    int starstoprint=3;
    int spacestoprint=1;
    for(int lines=1; lines<=7; lines++){
        for(int stars = starstoprint; stars>0; stars--){
            printf("*");
        }
        for(int spaces = spacestoprint; spaces>0; spaces--){
            printf(" ");
        }    
        printf("\n");

        if(lines>=4){
            starstoprint -= 2;
            spacestoprint++;
        }else{
            starstoprint += 2;
            spacestoprint--;
        }
    }
    return 0;
}