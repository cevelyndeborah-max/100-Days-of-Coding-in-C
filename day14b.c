//Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main()
{
    int pro=1,x=0,n;
    printf("Enter n");
    scanf("%d",&n);
    while(x<n)
    {

        x=x+2;
        pro=pro*x;
    }
    printf("%d",pro);
    x=2;
    printf("(%d",x);
    while(x<n)
    {
        x=x+2;
        printf("*%d",x);
    }
    printf(")");
    return 0;
}


