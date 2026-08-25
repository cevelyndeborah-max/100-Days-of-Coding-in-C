//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int n,b=0,a,c;
    printf("Enter n: ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        c=n%10;
        b=(b*10)+c;
        n=n/10;
    }
    if(b==a)
    {
        printf("Palindromic");
    }
    else
    {
        printf("Not Palindromic");
    }

    return 0;
}