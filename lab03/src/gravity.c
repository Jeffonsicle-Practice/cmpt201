/*
Author: Jeffrey Moniz
Lab03
this program will take two arguments and check what the parameter for the planet name is. the planet
will be checked and depending on the planet name the program will do calculations to get the gravitational acceleration
and print it to the console. if a planet name is not on the list of acceptable planet names the console will print an error
message.
*/

//add derivatives
#include<stdio.h>
#include"planets.h"
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{
    //initialize variables
    int distance = atoi(argv[2]);
    float gravAcel;

    //check if the planet name parameter equals acceptable planet names. if it does print the gravitational acceleration and exit the program
    if(strcmp(argv[1],"mercury") == 0)
    {
        gravAcel = 66.73E-12*(mercuryMass/(pow((distance+mercuryRad),2)));
        fprintf(stdout,"mercury-body @ %d [m] is %.2f [m/s2]\n",distance,gravAcel);
        return 0; 
    }
    else if(strcmp(argv[1],"venus") == 0)
    {
        gravAcel = 66.73E-12*(venusMass/(pow((distance+venusRad),2)));
        fprintf(stdout,"venus-body @ %d [m] is %.2f [m/s2]\n",distance,gravAcel);
        return 0;  
    }
    else if(strcmp(argv[1],"earth") == 0)
    {
        gravAcel = 66.73E-12*(earthMass/(pow((distance+earthRad),2)));
        fprintf(stdout,"earth-body @ %d [m] is %.2f [m/s2]\n",distance,gravAcel);
        return 0; 
    }
    else if(strcmp(argv[1],"mars") == 0)
    {
        gravAcel = 66.73E-12*(marsMass/(pow((distance+marsRad),2)));
        fprintf(stdout,"mars-body @ %d [m] is %.2f [m/s2]\n",distance,gravAcel);
        return 0; 
    }
    else if(strcmp(argv[1],"jupiter") == 0)
    {
        gravAcel = 66.73E-12*(jupiterMass/(pow((distance+jupiterRad),2)));
        fprintf(stdout,"jupiter-body @ %d [m] is %.2f [m/s2]\n",distance,gravAcel);
        return 0; 
    }
    else if(strcmp(argv[1],"saturn") == 0)
    {
        gravAcel = 66.73E-12*(saturnMass/(pow((distance+saturnRad),2)));
        fprintf(stdout,"saturn-body @ %d [m] is %.2f [m/s2]\n",distance,gravAcel);
        return 0; 
    }
    else if(strcmp(argv[1],"uranus") == 0)
    {
        gravAcel = 66.73E-12*(uranusMass/(pow((distance+uranusRad),2)));
        fprintf(stdout,"uranus-body @ %d [m] is %.2f [m/s2]\n",distance,gravAcel);
        return 0; 
    }
    else if(strcmp(argv[1],"neptune") == 0)
    {
        gravAcel = 66.73E-12*(neptuneMass/(pow((distance+neptuneRad),2)));
        fprintf(stdout,"neptune-body @ %d [m] is %.2f [m/s2]\n",distance,gravAcel);
        return 0; 
    }
    else{
        printf("not valid parameters\n");
        return 0;
    }
}