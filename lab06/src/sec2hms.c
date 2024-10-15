//call directives
#include<stdio.h>

int sec2hms(double* totalSec, int* hr, int* min, int* sec)
{
    /*
    this function takes four pointers and converts the totalSec pointer value into
    hours, minutes and seconds and puts the values into the corresponding pointers
    */

    //convert the totalSec value into the hours, minutes and seconds
    *hr = (int)(*totalSec/3600);
    *min = (int)(((*totalSec/3600)-*hr)*60);
    *sec = (int)(((((*totalSec/3600)-*hr)*60)-*min)*60);

    //print the pointers values onto the screen
    printf("hours = %d, minutes = %d, seconds = %d\n",*hr,*min,*sec);

    //exit the program
    return 0;
}

int main(void)
{
    /*
    this function declares the pointer values and calls the above function. 
    the program will take three totalSec values and check the 
    output from each one
    */

    //initialize the pointer values
    double totalSec = 0;
    int hr = 0;
    int min = 0;
    int sec = 0;

    //set totalSec, error check the value and call the above function
    totalSec = 567;
    
    if(totalSec < 0)
    {printf("ERROR\n");return 1;}

    sec2hms(&totalSec,&hr,&min,&sec);

    //set totalSec, error check the value and call the above function
    totalSec = 34;
    
    if(totalSec < 0)
    {printf("ERROR\n");return 1;}

    sec2hms(&totalSec,&hr,&min,&sec);

    //set totalSec, error check the value and call the above function
    totalSec = 56667;

    if(totalSec < 0)
    {printf("ERROR\n");return 1;}

    sec2hms(&totalSec,&hr,&min,&sec);

    //exit the program if no error occured
    printf("program successful execution\n");
    return 0;
}