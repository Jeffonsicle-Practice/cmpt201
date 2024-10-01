/*
Author: Jeffrey Moniz
lab04

this program takes a file parameter and checks to see if the file is in the program and if it is 
in the correct format. if it is the program will go through the file and make sure that
it is in the correct format (includes a header, and numbers seperated by one comma). the
program will then output an answer (if the file is valid or not)
*/

//derivatives
#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(int argc, char *argv[])
{

    //initialize variables: file pointer, position, character and comma check
    FILE *fp1;
    int pos = 0;
    char ch;
    int commaCheck=0;

    //try to open the file
    fp1 = fopen(argv[1],"r");

    //error check the above
    char* errorCheck = strtok(argv[1],".");
    errorCheck = strtok(NULL,".");

    //print error if the file does not exist or is not in the correct format
    if(errno >= 1)
    {
        printf("ERROR, file does not exist\n");
        return 0;
    }
    if(strcmp(errorCheck,"dat")!=0)
    {
        printf("ERROR, file not in correct format\n");
        return 0;
    }



    while((ch=getc(fp1)) != EOF)
    {
        if(pos>0)
        {
            //check if the character is a comma and add 1 to the comma checker if it is
            if(ch == ',')
            {
                commaCheck++;
                continue;
            }

            //if it is the end of the line check if the comma check is between 0 and 1
            else if(ch == '\n' && (commaCheck == 0 || commaCheck == 1))
            {
                commaCheck = 0;
                continue;
            }

            //if the comma check is greater than 1 at the end of the line the file is not valid
            else if(ch == '\n' && commaCheck > 1)
            {
                printf("file not valid\n");
                return 0;
            }
            else
            {
                continue;
            }
        }
        else if(ch == '\n')
        {
            pos++;
        }
        else
        {
            continue;
        }
    }

    //check if the final line of the file is in the correct format
    if(commaCheck > 1)
    {
        printf("file not valid\n");
        return 0;
    }


    //if everything is passed then the file is valid 
    printf("file valid\n");


    //close the file
    fclose(fp1);

    //exit the program
    return 0;
}