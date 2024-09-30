/*
Author: Jeffrey Moniz
Lab03
this program will take the information in the planets.h header file and input them
into the planetinfo.txt file
*/

//include derivatives
#include<stdio.h>
#include"planets.h"
#include<string.h>

int main(void)
{
    //set file pointer
    FILE *fp1;

    //open the file planetinfo.txt
    fp1 = fopen("planetinfo.txt","w");

    //add the information into the file
    fprintf(fp1,"planet, Mass [kg], Radius [km]\n");
    fprintf(fp1,"%s, %0.4e, %.1e\n","Mercury",mercuryMass,mercuryRad);
    fprintf(fp1,"%s, %0.4e, %.1e\n","venus",venusMass,venusRad);
    fprintf(fp1,"%s, %0.4e, %.1e\n","earth",earthMass,earthRad);
    fprintf(fp1,"%s, %0.4e, %.1e\n","mars",marsMass,marsRad);
    fprintf(fp1,"%s, %0.4e, %.1e\n","jupiter",jupiterMass,jupiterRad);
    fprintf(fp1,"%s, %0.4e, %.1e\n","saturn",saturnMass,saturnRad);
    fprintf(fp1,"%s, %0.4e, %.1e\n","uranus",uranusMass,uranusRad);
    fprintf(fp1,"%s, %0.4e, %.1e\n","neptune",neptuneMass,neptuneRad);

    //close the file
    fclose(fp1);

    //exit the program
    return 0;
}