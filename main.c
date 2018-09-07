#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int ch;

    printf("==>Enter the file<==\n");
    fp = fopen("file.txt", "r");
    while(fp == NULL)
    {
        printf("Can not open file!\n");
    }
    ch = getc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = getc(fp);
    }
    fclose(fp);
    return 0;
}
