#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    //declars the variables Rmin, Rmax and Ran
    int Rmin,Rmax;
    int Ran;

    //assigns values to the above variables
    Rmin = 0;
    Rmax = 100;

    //sets the seed as a time value of 0
    srand(time(0));

    //sets Ran as a random value, while the value is less than Rmin or greater than Rmax get a new Ran value
    Ran = rand();
    while(Ran < Rmin || Ran > Rmax) {
        Ran = rand();
    }

    //prints the Rmin, Ran and Rmax values
    printf("%d<=%d<=%d\n",Rmin,Ran,Rmax);

    //exits the function
    return 0;
}