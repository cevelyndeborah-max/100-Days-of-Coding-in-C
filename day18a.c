//Q35: Write a program to print all factors of a given number.

#include <stdio.h>
int main()
{
    int a=1,n;
    printf("Enter n: ");
    scanf("%d",&n);
    while(a<=n)
    {
        if(n%a==0)
        printf("%d ",a);
        a++;
    }
    return 0;
}