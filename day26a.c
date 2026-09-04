//Q51: Write a program to print the following pattern:
#include <stdio.h>

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int gap=5;gap>i;gap--)
        {
            printf(" ");
        }
        for(int j=i;j>=0;j--)
        {
            printf("%d",5-j);    
        }
        printf("\n");
    }
    return 0;
}