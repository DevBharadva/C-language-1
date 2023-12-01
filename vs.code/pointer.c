#include <stdio.h>
int main()
{
    int mynum=10;
    int* ptr;
    ptr = &mynum;

    printf("value of mynum is: %d",mynum);

    printf("Address of mynum is: %p",&mynum);

    printf("pointer of mynum is: %p",ptr);

return 0;
}