#include<stdio.h>
#include"planets.h"
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int distance = atoi(argv[2]);

    if(strcmp(argv[1],"mercury") == 0)
    {
        printf("%s, %s",argv[1],argv[2]);
        printf("%f, %f,%d\n",mercuryMass, mercuryRad,distance);
        return 0; 
    }
    else if(strcmp(argv[0],"venus") == 0){}
    else if(strcmp(argv[0],"earth") == 0){}
    else if(strcmp(argv[0],"mars") == 0){}
    else if(strcmp(argv[0],"jupiter") == 0){}
    else if(strcmp(argv[0],"saturn") == 0){}
    else if(strcmp(argv[0],"uranus") == 0){}
    else if(strcmp(argv[0],"neptune") == 0){}
    else{
        printf("you piece of ####\n");
        return 0;
    }
}