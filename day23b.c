//Q46: Write a program to print the following pattern:

#include <stdio.h>
int main()
{
    for(int count=0;count<5;count++)
    {
        for(int counts=0;counts<5;counts++)
        {
            printf("*");
        }
        printf("\n");
    }
}