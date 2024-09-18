#include<stdio.h>
#include<math.h>
int main(void)
{
    //declares the variables A,B and D
    int A;
    float B,D;
    
    //assigns the variables a number
    A = 10;
    B = 20.0;
    
    //completes the calculations and prints the result
    D = ((log10(B))/(log10(A)));
    printf("the D value is %f\n",D);
    
    //returns 0 to exit the function
    return 0;

}