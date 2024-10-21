#include<stdio.h>
#include<stdlib.h>

int loadData(char* filename, int* stationNumber, double* temp, double* pres)
{
    FILE *fp;

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("file does not exist\n");
        return 1;
    }

    if(fscanf(fp, "station: %d\n",stationNumber) != 1 || fscanf(fp, "pressure [kPa] : %lf\n",pres) != 1 || fscanf(fp, "Temperature [C]: %lf\n",temp) != 1)
    {
        fclose(fp);
        return 1;
    }

    fclose(fp);
    return 0;
}

int main(void)
{
    int stationNum;
    double temp, pres;

    if(loadData("file1.txt",&stationNum,&temp,&pres) == 0)
    {
        printf("data loaded successfully: %d, %lf, %lf\n",stationNum,temp,pres);
    }
    else
    {
        printf("error loading data from file1.txt\n");
    }

    printf("\n");

    if(loadData("file2.txt",&stationNum,&temp,&pres) == 0)
    {
        printf("data loaded successfully: %d, %lf, %lf\n",stationNum,temp,pres);
    }
    else
    {
        printf("error loading data from file2.txt\n");
    }

    printf("\n");

    if(loadData("file3.txt",&stationNum,&temp,&pres) == 0)
    {
        printf("data loaded successfully: %d, %lf, %lf\n",stationNum,temp,pres);
    }
    else
    {
        printf("error loading data from file3.txt\n");
    }

    return 0;
}