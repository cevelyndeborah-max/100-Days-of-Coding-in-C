//Q54: Write a program to print the following pattern:

#include <stdio.h>
int main()
{
    for(int i=7;i>=1;i=i-2)
    {
        for(int gap=1;gap<i;gap=gap+2)
        {
            printf(" ");
        }
        for(int j=i;j<8;j++)
        {
            printf("*");
        }
        for(int gap=1;gap<i;gap=gap+2)
        {
            printf(" ");
        }
        printf("\n");
    }
    for(int i=5;i>=1;i=i-2)
    {
        for(int gap=i;gap<7;gap=gap+2)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int gap=i;gap<=7;gap=gap+2)
        {
            printf(" ");
        }
        printf("\n");
    }

   
    return 0;
}