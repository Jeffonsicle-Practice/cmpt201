#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*
to do: make the program cleaner - set a function above main which takes the article string and array and returns
the new array. the functions using strtok

maybe add a function above which opens all the files at once to make the program cleaner? 

add comments
*/

int main(void)
{

    srand(time(NULL));

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

    int i;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    FILE *fp1, *fp2, *fp3, *fp4, *fp5;

    fp1 = fopen("articles.txt","r");
    fp2 = fopen("adjectives.txt","r");
    fp3 = fopen("noun.txt","r");
    fp4 = fopen("verb.txt","r");
    fp5 = fopen("adverb.txt","r");

    for(i = 0; i < 20; i++)
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
    }

    printf("%s %s %s %s %s\n",articlesArr2[rand()%6], adjArr2[rand()%10], nounArr2[rand()%10], verbArr2[rand()%10], adverbArr2[rand()%10]);

    return 0;

}