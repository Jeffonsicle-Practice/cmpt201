#include<stdio.h>
#include<stdlib.h>

int loadData(char* filename, int* stationNumber, double* temp, double* pres)
{
    /*
    this function takes the filename and opens the file, it then checks to see if it exists. if it does exist
    the function checks the format of the file and then takes the stationNumber, temp, and pres from the file
    and loads the value in the pointers to be used in the main function
    */

    //opens the file
    FILE *fp;
    fp = fopen(filename, "r");

    //checks to see if the file exists
    if(fp == NULL)
    {
        printf("file does not exist\n");
        return 1;
    }

    //checks the format of the file, if the format is good save the values in the pointer and close the file
    if(fscanf(fp, "station: %d\n",stationNumber) != 1 || fscanf(fp, "pressure [kPa] : %lf\n",pres) != 1 || fscanf(fp, "Temperature [C]: %lf\n",temp) != 1)
    {
        fclose(fp);
        return 1;
    }

    //close the file and exit the function if the error checking is good
    fclose(fp);
    return 0;
}

int main(void)
{
    /*
    this main function creates the 3 variables: staionNum, temp and pres. the function then takes these variables
    as pointers and the file name and calls the loadData function to do error checking and set the values in the 
    pointers. The function has three test cases for three different files
    */

    //initializes variables stationNum, temp and pres
    int stationNum;
    double temp, pres;


    //calls the function loadData for file1, it then checks to see if the function execution was successful or not
    if(loadData("file1.txt",&stationNum,&temp,&pres) == 0)
    {
        printf("data loaded successfully: %d, %lf, %lf\n",stationNum,temp,pres);
    }
    else
    {
        printf("error loading data from file1.txt\n");
    }

    //creates a space for the printing
    printf("\n");


    //calls the function loadData for file2, it then checks to see if the function execution was successful or not
    if(loadData("file2.txt",&stationNum,&temp,&pres) == 0)
    {
        printf("data loaded successfully: %d, %lf, %lf\n",stationNum,temp,pres);
    }
    else
    {
        printf("error loading data from file2.txt\n");
    }

    //creates a space for the printing
    printf("\n");


    //calls the function loadData for file3, it then checks to see if the function execution was successful or not
    if(loadData("file3.txt",&stationNum,&temp,&pres) == 0)
    {
        printf("data loaded successfully: %d, %lf, %lf\n",stationNum,temp,pres);
    }
    else
    {
        printf("error loading data from file3.txt\n");
    }


    //exits the program
    return 0;
}