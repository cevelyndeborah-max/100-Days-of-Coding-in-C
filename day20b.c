//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main()
{
    int a,n,pro=1,b=0,c,d=1;
    printf("Enter binary: ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        if(a==1)
        {
            c=a-1;
            b=b+(c*d);
            d=d*10;
        }
        if(a==0)
        {
            c=a+1;
            b=b+(c*d);
            d=d*10;
        }
        n=n/10;
    }
    printf("%d",b);
    return 0;
}