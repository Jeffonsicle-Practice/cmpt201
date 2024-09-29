#include<stdio.h>
#include"planets.h"
#include<string.h>
int main(char planet, int distance)
{
    if(strcmp(planet,"mercury"))
    {
       printf("%f, %f, %d\n",mercuryMass, mercuryRad, distance);
        return 0; 
    }
    else{
        printf("you piece of ####");
        return 0;
    }
}