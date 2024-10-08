#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
    int count = 0;

    if(argc > 2)
    {
        printf("more than 1 string detected!\n");
        return 1;
    }

    for(int i = 0; i < strlen(argv[1]); i++)
    {
        count++;
    }

    printf("the length of %s is %d\n",argv[1],count);

    return 0;
}