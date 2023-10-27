#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    for(int x=0; x<=30; x++){
        for(int y=0; y<=30; y++){
            for(int z=0; z<=30; z++){
                if ((3*x+2*y+z==50)&&(x+y+z==30))
                {
                    printf("%d gentlemen,%d ladies,%d children at the dinner.\n",x,y,z);
                    break;
                }
            }
        }
    }
    return 0;
}