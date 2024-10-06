/*
Author: Jeffrey Moniz
lab04

this program will take a string of characters and check the ascii characters of each of the characters, the program will
then print the results of the ascii characters and tells the user what types of ascii characters are in the given sentence
*/

//call directives
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{

    //declare variables such as the users sentence, i, control and special characters, num and letters
    char sentence[100];
    int i;
    int controlChar = 0;
    int specialChar = 0;
    int num = 0;
    int letters = 0;


    //the user enters a string
    printf("please enter a string: ");
    scanf("%[^\n]s",sentence);


    //goes into each of the characters in the sentence
    for(i=0;i != strlen(sentence); i++)
    {

        //checks if the character is a control character, if it is add 1 to the controlChar
        if(((int)sentence[i] >= 0 && (int)sentence[i] <= 31) || (int)sentence[i] == 127)
        {
            controlChar++;
        }

        //checks if the character is a special character, if it is add 1 to the specialChar
        else if(((int)sentence[i] >= 32 && (int)sentence[i] <= 47) || ((int)sentence[i] >= 58 && (int)sentence[i] <= 64) || ((int)sentence[i] >= 91 && (int)sentence[i] <= 96) || ((int)sentence[i] >= 123 && (int)sentence[i] <= 126))
        {
            specialChar++;
        }

        //checks if the character is a number, if it is add 1 to the num counter
        else if((int)sentence[i] >= 48 && (int)sentence[i] <= 57)
        {
            num++;
        }

        //checks if the character is a letter, if it is add 1 to the letters counter
        else if(((int)sentence[i] >= 65 && (int)sentence[i] <= 90) || ((int)sentence[i] >= 97 && (int)sentence[i] <= 122))
        {
            letters++;
        }

        //if its none of the above, continue the loop
        else
        {
            continue;
        }
    }


    //if the string only has controlChar then print the statement below
    if(controlChar >= 1 && specialChar == 0 && num == 0 && letters == 0)
    {
        printf("contains all control characters\n");
        return 0;
    }

    //if the string only has specialChar then print the statement below
    else if(controlChar == 0 && specialChar >= 1 && num == 0 && letters == 0)
    {
        printf("contains all special characters\n");
        return 0;
    }

    //if the string only has numbers then print the statement below
    else if(controlChar == 0 && specialChar == 0 && num >= 1 && letters == 0)
    {
        printf("contains all numbers\n");
        return 0;
    }

    //if the string only has letters then print the statement below
    else if(controlChar == 0 && specialChar == 0 && num == 0 && letters >= 1)
    {
        printf("contains all letters\n");
        return 0;
    }


    //the below if else statements checks parameters for the control characters
    if(controlChar == 1)
    {
        printf("contains a control character, ");
    }
    else if(controlChar > 1)
    {
        printf("contains control characters, ");
    }


    //the below if else statements checks parameters for the special characters
    if(specialChar == 1 && num == 0 && letters == 0)
    {
        printf("and contains a special character");
    }
    else if(specialChar > 1 && num == 0 && letters == 0)
    {
        printf("and contains special characters");
    }
    else if(specialChar == 1)
    {
        printf("contains a special character, ");
    }
    else if(specialChar > 1)
    {
        printf("contains special characters, ");
    }


    //the below if else statements checks parameters for numbers
    if(num == 1 && letters == 0)
    {
        printf("and contains a number");
    }
    else if(num > 1 && letters == 0)
    {
        printf("and contains numbers");
    }
    else if(num == 1)
    {
        printf("contains a number, ");
    }
    else if(num > 1)
    {
        printf("contains numbers, ");
    }


    //the below if else statements checks parameters for the letters
    if(letters == 1)
    {
        printf("and contains a letter");
    }
    else if(letters > 1)
    {
        printf("and contains letters");
    }


    //prints a newline at the end of the above if else statements
    printf("\n");

    //exits the program
    return 0;

}