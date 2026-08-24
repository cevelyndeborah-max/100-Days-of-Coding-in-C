//Q30: Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    int a,re=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    while(1)
    {
        a=n%10;
        re=(re*10)+a;
        n=n/10;
        if(n==0)
        break;
    }
    printf("%d",re);

    return 0;
}
