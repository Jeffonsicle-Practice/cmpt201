//directives
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
    /*
    this function prints the length of the given string
    */

    //initializes count
    int count = 0;

    //error checks, making sure the argument only contains one string
    if(argc > 2)
    {
        printf("more than 1 string detected!\n");
        return 1;
    }

    //goes through the string and adds 1 to the count for each iteration of the loop
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        count++;
    }

    //prints the stirng and the length
    printf("the length of %s is %d\n",argv[1],count);

    //exits the program
    return 0;
}