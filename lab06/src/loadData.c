

int c
{
    //bob
}

int main(void)
{
    FILE *fp1, *fp2. *fp3;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    fp3 = fopen("file3.txt", "r");

    if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("file does not exist\n");
        return 1;
    }
}