#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{

    srand(time(NULL));

    char sentence[6];

    int articleNum = rand() %10;

    printf("%d\n",articleNum);

    FILE *fp1, *fp2, *fp3, *fp4, *fp5;

    fp1 = fopen("articles.txt","r");

}