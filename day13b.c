//Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n,a=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("%d ",a);
        a++;
    }
    return 0;
}