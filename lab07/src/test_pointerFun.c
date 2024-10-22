#include<stdio.h>
#include"pointerFun.h"

int q1(void)
{
    /*
    this function sets all the pointers and values and calls the poly function
    */
    double coef[] = {1.0f, 2.0f};
    double x[] = {1.0f,2.0f,3.0f,4.0};
    int nc = sizeof(coef) / sizeof(coef[0]);
    int na = sizeof(x) / sizeof(x[0]);
    double y[na];

    poly(&coef, &x, &y, &nc, &na);
}

int q2(void)
{
    /*
    this function sets all pointers and values and calls the function reverso
    */
    char str[] = "hello world";
    int n = sizeof(str) / sizeof(str[0]);

    reverso(&str, &n);
}

int q3(void)
{
    char str[10] = "The";
    int n = sizeof(str) / sizeof(str[0]);

    str_centre(&str, &n);
}

int main(void)
{
    /*
    this main function calls each question in the header file
    */
    
    q1();

    printf("\n");

    q2();

    printf("\n");

    q3();

    return 0;
}