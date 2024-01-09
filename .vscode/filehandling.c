#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void demofilelinebyline()
{
    FILE *fp= fopen("Data.txt","w");
    char line[][50]={{"First Line"},{"Second line"},{"Third line"}};
    for (int i = 0; i < 3; i++)
    {
        fputs(line[i],fp);
        fputs("\n",fp);
    }
    fclose(fp);
}

void demoWritefilecharbychar()
{
    FILE *fp= fopen("Data_copy.txt","w");
    char letters[]="this is a demo";
    int i=0;
    while (i < strlen(letters))
    {
        fprintf(fp,"%s",letters[i++]);
    }
    fclose(fp);
}

void demoReadfilelinebyline()
{
    char buffer[100];
    FILE *fp={"Data.txt", "r"};
    
}