//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>
int main()
{
    int b=1,fac=1,a,sum=0,c,n;
    printf("Enter n: ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        a=n%10;
        while(b<=a)
        {
            fac=fac*b;
            b++;
        }
        sum=sum+fac;
        b=1;
        fac=1;
        n=n/10;
    }
    if(sum==c)
    printf("Strong number");
    else
    printf("Not Strong number");
    return 0;
}