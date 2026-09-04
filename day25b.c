//Q50: Write a program to print the following pattern:
#include <stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int gap=0;gap<i;gap++)
        {
            printf(" ");
        }
        for(int j=i;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}