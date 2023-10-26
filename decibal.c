#include<stdio.h>

int main()
{
    int decibal;
    printf("Enter the decibal value:");
    scanf("%d", &decibal);
    if(decibal>=0 && decibal<=60){
        printf("Quiet\n");
    }else if(decibal>=61 && decibal<=70){
        printf("Conversational\n");
    }else if(decibal>=71 && decibal<=90){
        printf("Loud\n");
    }else if(decibal>=91 && decibal<=110){
        printf("Very Loud\n");
    }else if(decibal>=111 && decibal<=129){
        printf("Dangerous\n");
    }else if(decibal>=130 && decibal<=194){
        printf("Very Dangerous\n");
    }else{
        printf("Invalid decimal value.\n");
        
    }
    return 0;
}