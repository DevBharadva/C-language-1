#include <stdio.h>
int main () 
{
    int i=1;

    for(i=1;i<=10;i++)
    {
        printf("%d",i);
        if(i==5)
        {
            break;
        }
    }
    return 0;
}