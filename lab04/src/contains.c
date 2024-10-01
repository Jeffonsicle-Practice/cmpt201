#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char sentence[100];
    int i;
    int controlChar = 0;
    int specialChar = 0;
    int num = 0;
    int letters = 0;

    printf("please enter a string: ");
    scanf("%[^\n]s",sentence);

    for(i=0;i != strlen(sentence); i++)
    {

        if(((int)sentence[i] >= 0 && (int)sentence[i] <= 31) || (int)sentence[i] == 127)
        {
            printf("works\n");
            return 0;
        }
        else if(((int)sentence[i] >= 32 && (int)sentence[i] <= 47) || ((int)sentence[i] >= 58 && (int)sentence[i] <= 64) || ((int)sentence[i] >= 91 && (int)sentence[i] <= 96) || ((int)sentence[i] >= 123 && (int)sentence[i] <= 126))
        {
            printf("works\n");
            return 0;
        }
        else
        {
            continue;
        }
    }

}