#include<stdio.h>
int main()
{
    int spacestoprint = 3;
    int starstoprint = 1;
    for(int lines=1; lines<=7; lines++){
        for(int spaces = spacestoprint; spaces>0; spaces--){
            printf(" ");
        }
        for(int stars = starstoprint; stars>0; stars--){
            printf("*");
        }   
        //move cursor to the next line 
        printf("\n");
        // update the stars and spaces
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