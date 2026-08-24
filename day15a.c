//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main()
{
    int a=1,fac=1,n;
    printf("Enter n:");
    scanf("%d",&n);
    while(a<=n)
    {
        fac=fac*a;
        a++;
    }
    printf("%d",fac);

    return 0;
}