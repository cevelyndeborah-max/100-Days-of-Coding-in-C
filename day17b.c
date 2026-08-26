//Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main()
{
    int n,a=2;
    printf("Enter n: ");
    scanf("%d",&n);
    while(a<n)
    {
        if(n%2!=0)
        {
            a++;    
        }
        else;
        {
            break;
        }
    }
    if(n%a==0)
    printf("Not prime");
    else
    printf("Prime");
    return 0;
}