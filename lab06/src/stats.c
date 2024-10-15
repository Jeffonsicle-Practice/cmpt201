//directives
#include<stdio.h>
#include<string.h>
#define NMAX 5

int stats(double* array, double* min, double* mean, int* max)
{
    /*
    this function checks an arrays values and prints the minimum value, 
    max value and the mean value using pointers. 
    */

    //initialize avg and i
    double avg = 0.0;
    int i;

    //go through the array and check for the max and min values
    for(i = 0; i < NMAX; i++)
    {
        if(array[i] < *min)
        {
            *min = array[i];
        }
        if(array[i] > *max)
        {
            *max = array[i];
        }
        avg += array[i];
        continue;
    }
    
    //calculate the mean
    *mean = avg/i;

    //output the max, min and mean values
    printf("min value = %lf, max value = %d, mean = %lf\n", *min, *max, *mean);

    //resets the values
    *mean = 0;
    *min = 50000000.000000;
    *max = 0;

    //exit the program
    return 0;
}

int main(void)
{
    /*
    this main function takes defines the array and the starting max and min values. 
    it also sets the mean to 0. Once the main has the needed information it will
    call the function above
    */

    //initialize the array, max, min and mean
    double arr[NMAX] = {5.5,20.4,34.67,22.4,56.7};
    double min = 5000000.00000;
    double mean = 0;
    int max = 0;

    //calls the above function
    stats(arr, &min, &mean, &max);

    //calls a new array
    arr[0] = 44.6;
    arr[1] = 22.3;
    arr[2] = 77.8;
    arr[3] = 99.1;
    arr[4] = 2323.7;

    //calls the function above
    stats(arr, &min, &mean, &max);

    //calls a new array
    arr[0] = -10.6;
    arr[1] = 778.3;
    arr[2] = 6.0;
    arr[3] = -80.1;
    arr[4] = 999.7;

    //calls the function above
    stats(arr, &min, &mean, &max);

    //exits the program
    return 0;
}