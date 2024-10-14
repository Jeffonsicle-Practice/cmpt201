//directives
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    /*
    this program gets a value between 0 and 1 and performs a ln() calculation 200 times. 
    the program then returns the sum of the calculation
    */

    //initializes x, sum and k
    double x = atof(argv[1]);
    double sum = 0.0;
    double k = 1.0;

    //error checks, makes sure x is between 0 and 1
    if(x <= 0 || x > 1)
    {
        printf("input not in range!\n");
        return 1;
    }
    
    //performs the ln calculation 200 times and adds it to sum
    for(int i = 0; i <= 200; i++)
    {
        sum = (pow(-1,k-1)*pow((x-1),k))/k;
        sum += sum;
    }

    //prints the sum
    printf("ln(%lf) = %lf\n",x,sum);

    //exits the program
    return 0;
}