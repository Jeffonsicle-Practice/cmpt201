#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int sum = 0;
    int base = atoi(argv[2]);
    int power = strlen(argv[1])-1;

    if(argc > 3)
    {
        printf("too many arguments!\n");
        return 1;
    }

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

    printf("%d\n",sum);

    return 0;
}