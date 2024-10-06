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
    char retSentence[200];

    printf("please enter a string: ");
    scanf("%[^\n]s",sentence);

    for(i=0;i != strlen(sentence); i++)
    {

        if(((int)sentence[i] >= 0 && (int)sentence[i] <= 31) || (int)sentence[i] == 127)
        {
            controlChar++;
        }
        else if(((int)sentence[i] >= 32 && (int)sentence[i] <= 47) || ((int)sentence[i] >= 58 && (int)sentence[i] <= 64) || ((int)sentence[i] >= 91 && (int)sentence[i] <= 96) || ((int)sentence[i] >= 123 && (int)sentence[i] <= 126))
        {
            specialChar++;
        }
        else if((int)sentence[i] >= 48 && (int)sentence[i] <= 57)
        {
            num++;
        }
        else if(((int)sentence[i] >= 65 && (int)sentence[i] <= 90) || ((int)sentence[i] >= 97 && (int)sentence[i] <= 122))
        {
            letters++;
        }
        else
        {
            continue;
        }
    }

    if(controlChar >= 1 && specialChar == 0 && num == 0 && letters == 0)
    {
        printf("contains all control characters\n");
        return 0;
    }
    else if(controlChar == 0 && specialChar >= 1 && num == 0 && letters == 0)
    {
        printf("contains all special characters\n");
        return 0;
    }
    else if(controlChar == 0 && specialChar == 0 && num >= 1 && letters == 0)
    {
        printf("contains all numbers\n");
        return 0;
    }
    else if(controlChar == 0 && specialChar == 0 && num == 0 && letters >= 1)
    {
        printf("contains all letters\n");
        return 0;
    }

    if(controlChar == 1)
    {
        printf("contains a control character, ");
    }
    else if(controlChar >= 1)
    {
        printf("contains control characters, ");
    }

    if(specialChar == 1)
    {
        printf("contains a special character, ");
    }
    else if(specialChar >= 1)
    {
        printf("contains special characters, ");
    }

    if(num == 1)
    {
        printf("contains a number, ");
    }
    else if(num >= 1)
    {
        printf("contains numbers, ");
    }

    if(letters == 1)
    {
        printf("contains a letter, ");
    }
    else if(letters >= 1)
    {
        printf("contains letters, ");
    }

    printf("\n");

    return 0;

}