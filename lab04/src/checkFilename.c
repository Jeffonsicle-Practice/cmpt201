/*
Author: Jeffrey Moniz
lab04

this program takes a parameter which is the filename and runs it through the program to check if it
is a valid name or not
*/

//derivatives
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
    //initializing variables fileName, pos and i
    char* fileName = strtok(argv[1],"_");
    int pos = 0;
    int i;

    //running the while statement until the end of the fileName
    while(fileName != NULL){

        //checks if the start of the fileName is cmpt201
        if(strcmp(fileName,"cmpt201") == 0 && pos == 0)
        {
            fileName = strtok(NULL,"_");
            pos++;
            continue;
        }
        else if(pos == 1)
        {
            //checks the length of the fileName after the string cmpt201 has been checked
            if(strlen(fileName) == 3 || strlen(fileName) == 2)
            {
                //makes sure that all initials are letters and not numbers
                for(i=0; i != strlen(fileName); i++)
                {
                    if(isalpha(fileName[i]))
                    {
                        continue;
                    }
                    else
                    {
                        printf("rename before submitting\n");
                        return 0;
                    }
                }
                fileName = strtok(NULL,"_");
                pos++;
                continue;
            }
            else
            {
                printf("rename before submitting\n");
                return 0;
            }
        }
        //checks that the lab number is from 00 to 13 and that it is in the correct format
        else if(pos==2)
        {
            if(strcmp(fileName,"lab00.tar.gz") == 0 || strcmp(fileName,"lab01.tar.gz") == 0 || strcmp(fileName,"lab02.tar.gz") == 0 || strcmp(fileName,"lab03.tar.gz") == 0 || strcmp(fileName,"lab04.tar.gz") == 0 || strcmp(fileName,"lab05.tar.gz") == 0 || strcmp(fileName,"lab06.tar.gz") == 0 || strcmp(fileName,"lab07.tar.gz") == 0 || strcmp(fileName,"lab08.tar.gz") == 0 || strcmp(fileName,"lab09.tar.gz") == 0 || strcmp(fileName,"lab10.tar.gz") == 0 || strcmp(fileName,"lab11.tar.gz") == 0 || strcmp(fileName,"lab12.tar.gz") == 0 || strcmp(fileName,"lab13.tar.gz") == 0)
            {
                fileName = strtok(NULL,"_");
                printf("good to submit\n");
                return 0;
            }
            else
            {
                printf("rename before submitting\n");
                return 0;
            }
        }
        //if the above has been checked and something is not correct, the fileName is not in the correct format
        else
        {
            printf("rename before submitting\n");
            return 0;
        }
    }
}