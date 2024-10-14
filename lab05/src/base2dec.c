//directives
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    /*
    this main function takes 2 arguments, a base and a power and takes the sum of the base and power.
    the program then prints the sum
    */

    //initialize sum, base and power
    int sum = 0;
    int base = atoi(argv[2]);
    int power = strlen(argv[1])-1;

    //error checks and makes sure that there are only 3 arguments including the file name
    if(argc > 3)
    {
        printf("too many arguments!\n");
        return 1;
    }

    //takes the sum of the base and power
    for(int i= 0; i < strlen(argv[1]); i++)
    {

        if(isalpha(argv[1][i]))
        {
            sum += (toupper(argv[1][i]) - '0' - 7)*pow(base,power);
            power -= 1;
        }
        else
        {
            sum += (argv[1][i] - '0')*pow(base,power);
            power -= 1;
        }
    }

    //prints the sum
    printf("%d\n",sum);

    //exits the program
    return 0;
}