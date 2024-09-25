/* 
Author: Jeffrey Moniz
Lab03
This program takes a user input and will return the ASCII of the input */

#include<stdio.h>
int main(void) 
{
    //initializes the variable val
    char val;

    //gets the user input of a single digit
    printf("Please enter a single character: ");
    scanf("%c",&val);

    //prints the users inputed digit and the ascii of the digit
    printf("%c -> %d\n",val,val);

    //exits the program
    return 0;
}