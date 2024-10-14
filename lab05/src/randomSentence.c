//directives
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void arrMaker(char arr1[], char *arr3[], int NMAX, FILE *fp)
{
    /*
    this function takes the file information and puts it into arrays
    */

    //initializes a
    int a = 0;

    //puts the file information into the string
    for(int i = 0; i < NMAX; i++)
    {
        fscanf(fp,"%s",arr1);
    }

    //takes the string information and puts it into a array 
    char *arr2 = strtok(arr1,",");
    while(arr2 != NULL)
    {
        arr3[a++] = arr2;
        arr2 = strtok(NULL, ",");
    }
}

int main(void)
{
    /*
    this function opens the files, takes the information and puts them into arrays, and randomly picks words from 
    the array to print onto the terminal. 
    */

    //defines the time so that the random function works
    srand(time(NULL));

    //initializes the string and array
    char articles[20];
    char *articlesArr2[7];

    char adjectives[200];
    char *adjArr2[11];

    char noun[200];
    char *nounArr2[11];

    char verb[200];
    char *verbArr2[11];

    char adverb[200];
    char *adverbArr2[11];

    //defines file pointers
    FILE *fp1, *fp2, *fp3, *fp4, *fp5;

    //opens each file
    fp1 = fopen("articles.txt","r");
    fp2 = fopen("adjectives.txt","r");
    fp3 = fopen("noun.txt","r");
    fp4 = fopen("verb.txt","r");
    fp5 = fopen("adverb.txt","r");

    //calls the arrMaker function 
    arrMaker(articles, articlesArr2, 20, fp1);
    arrMaker(adjectives, adjArr2, 200, fp2);
    arrMaker(noun, nounArr2, 200, fp3);
    arrMaker(verb, verbArr2, 200, fp4);
    arrMaker(adverb, adverbArr2, 200, fp5);

    //prints a random word from each array
    printf("%s %s %s %s %s\n",articlesArr2[rand()%6], adjArr2[rand()%10], nounArr2[rand()%10], verbArr2[rand()%10], adverbArr2[rand()%10]);

    //exits the function
    return 0;

}



//just in case I need to review the old code for troubleshooting reasons: 

    /*for(i = 0; i < 20; i++)
    {
        fscanf(fp1,"%s",articles);
    }

    char * articlesArr = strtok(articles,",");
    while(articlesArr != NULL)
    {
        articlesArr2[a++] = articlesArr;
        articlesArr = strtok(NULL, ",");
    }

    for(i = 0; i < 20; i++)
    {
        fscanf(fp2,"%s",adjectives);
    }

    char * adjArr = strtok(adjectives,",");
    while(adjArr != NULL)
    {
        adjArr2[b++] = adjArr;
        adjArr = strtok(NULL, ",");
    }

    for(i = 0; i < 20; i++)
    {
        fscanf(fp3,"%s",noun);
    }

    char * nounArr = strtok(noun,",");
    while(nounArr != NULL)
    {
        nounArr2[c++] = nounArr;
        nounArr = strtok(NULL, ",");
    }

    for(i = 0; i < 20; i++)
    {
        fscanf(fp4,"%s",verb);
    }

    char * verbArr = strtok(verb,",");
    while(verbArr != NULL)
    {
        verbArr2[d++] = verbArr;
        verbArr = strtok(NULL, ",");
    }

    for(i = 0; i < 20; i++)
    {
        fscanf(fp5,"%s",adverb);
    }

    char * adverbArr = strtok(adverb,",");
    while(adverbArr != NULL)
    {
        adverbArr2[e++] = adverbArr;
        adverbArr = strtok(NULL, ",");
    }*/