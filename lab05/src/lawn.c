#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    double x = atof(argv[1]);
    double sum = 0.0;
    double k = 1.0;

    if(x <= 0 || x > 1)
    {
        printf("input not in range!\n");
        return 1;
    }
    
    for(int i = 0; i <= 200; i++)
    {
        sum = (pow(-1,k-1)*pow((x-1),k))/k;
        sum += sum;
    }

    printf("ln(%lf) = %lf\n",x,sum);

    return 0;
}