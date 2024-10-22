#include<math.h>

void poly(double* coef, double* x, double* y, int* nc, int* na)
{
    /*
    this function takes coefficients and adds them together. the last coefficient is multiplied by x and is also
    added together with the other coefficients. the program then prints the equation, x and y values
    */

    //initialize total
    int total = 0;

    //print the equation format
    printf("Equation = ");
    for(int q = 0; q < *nc; q++)
    {
        if(q == *nc-1)
        {
            printf("%.1fx",coef[q]);
        }
        else
        {
            printf("%.1f + ",coef[q]);
        }
    }
    printf("\n");


    //multiply the last coefficient by x and add it with the other coefficients
    for(int a = 0; a < *na; a++)
    {

        for(int i = *nc-1; i >= 0; i--)
        {
            if(i == *nc-1)
            {
                total += coef[i]*x[a];
            }
            else
            {
                total += coef[i];
            }
        }

        y[a] = total;

        total = 0;
    }

    //print the formatted x values
    printf("X values = [ ");
    for(int k = 0; k < *na; k++)
    {
        if(k == *na-1)
        {
            printf("%.1f ",x[k]);
        }
        else
        {
            printf("%.1f, ",x[k]);
        }
    }
    printf("]\n");

    //print the formatted y values
    printf("Y values = [ ");
    for(int j = 0; j < *na; j++)
    {
        if(j == *na-1)
        {
            printf("%.1f ",y[j]);
        }
        else
        {
            printf("%.1f, ",y[j]);
        }
    }
    printf("]\n");

    //exit the program
    return;
}


void reverso(char* str, int* n)
{
    /*
    this function takes the string and prints it, it then reverses the string and prints it again
    */

    //initializes i
    int i;

    //prints the original string
    printf("the original string: ");
    for(i = 0; i < *n; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    //prints the reverse of the string
    printf("the reversed string is: ");
    for(i = *n; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

void str_centre(char* str, int* n)
{
    int strLen = 0;
    int mid,i;
    for(i = 0; i < *n; i++)
    {
        if(str[i] != '\0')
        {
            strLen++;
        }
        else
        {
            continue;
        }
    }

    mid = *n/strLen;

    for(i = 0; i < mid; i++)
    {
        printf("X");
    }
    for(i = 0; i < mid; i++)
    {
        printf("%c",str[i]);
    }
    for(i = 0; i < mid-1; i++)
    {
        printf("X");
    }
    printf("\0");
    printf("\n");
}