//Q52: Write a program to print the following pattern:
#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i==2||i==4)
        {
            printf("\n");
            continue;
        }
        for(int j=1;j<=i;j++)
        {
            printf("*\n");    
        }
    }
    printf("\n");
    for(int i=3;i>=1;i--)
    {
        if(i==2)
        {
            printf("\n");
            continue;
        }
        for(int j=1;j<=i;j++)
        {
            printf("*\n");
        }
    }

    return 0;
}