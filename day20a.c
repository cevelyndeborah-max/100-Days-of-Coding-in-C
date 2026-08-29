//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main()
{
    int a,n,pro=1,c;
    printf("Enter n: ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        a=n%10;
        if(a%2!=0)
        {
            pro=pro*a;
        }
        n=n/10;
    }
    printf("%d",pro);
    n=c;

    return 0;
}