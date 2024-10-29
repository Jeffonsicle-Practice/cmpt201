#include<stdio.h>
#include<stdlib.h>
#define NMAX 101
#include<math.h>
#include<time.h>

//this struct creates objects for x, y, and z as float values
typedef struct{float x; float y; float z;} Value;

int main(void)
{
    /*
    this function takes the values from the file data.dat and seperates them into objects from the struct 
    x, y and z. the program then takes a random number and calculates the distance between the two struct
    objects. this program also uses dynamic memory allocation
    */

    //initialize values
    srand(time(NULL));
    Value *ptr;
    int n;
    float x,y,z,d;
    int a,b;
    FILE *fp;

    //try to open the file data.dat. if it doesnt work return an error and exit
    fp = fopen("data.dat","r");
    if(fp == NULL)
    {
        printf("file does not exist\n");
        return 1;
    }

    //get the total number of file lines in data.dat
    else
    {
        fscanf(fp,"%d",&n);
    }
    //printf("%d\n",n);
    //create a space
    printf("\n");

    //set the dynamic memory allocation to n size and check if it worked or not
    ptr = calloc(n, sizeof(int));
    if(!ptr) return 1;

    //set the x, y, z values as objects for the above struct
    for(int i = 0; i < n; i++)
    {
        fscanf(fp,"%f,",&x);
        fscanf(fp,"%f,",&y);
        fscanf(fp,"%f,",&z);

        (*(ptr+i)).x = x;
        (*(ptr+i)).y = y;
        (*(ptr+i)).z = z;

        x = 0;
        y = 0;
        z = 0;
    }

    //get 2 random numbers
    a = rand() % (3 + 1 - 0) + 0;
    b = rand() % (3 + 1 - 0) + 0;

    //perform a calculation to calculate the distance
    d = sqrt(pow(((*(ptr+a)).x-(*(ptr+b)).x),2) + pow(((*(ptr+a)).y-(*(ptr+b)).y),2) + pow(((*(ptr+a)).z-(*(ptr+b)).z),2));

    //sort the a, b random values into shortest printed first and exit the program
    if(a < b)
    {
        printf("the minimum distance is %.2f and is between points %d and %d\n",d,a+1,b+1);
        return 0;
    }
    else
    {
        printf("the minimum distance is %.2f and is between points %d and %d\n",d,b+1,a+1);
        return 0;
    }
}