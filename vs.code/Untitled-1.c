#include <stdio.h>
int main()
{
    FILE *fp;
    char buff[500];

    fp = fopen("d:/dev/array/count.c","r");

    while(fscanf(fp,"%s",buff) != EOF)
    {
        printf("%s ",buff);
    }

    fclose(fp);
    
    return 0;
}