//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main()
{
    int n,b=0,a,c=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%2;
        b=(a*c)+b;
        c=c*10;
        n=n/2;
    }
    printf("%d",b);

    return 0;
}