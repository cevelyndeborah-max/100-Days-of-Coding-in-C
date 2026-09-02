//Q47: Write a program to print the following pattern:
#include <stdio.h>
int main()
{
    for(int a=1;a<=5;a++)
    {
        for(int b=0;b<a;b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}