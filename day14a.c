//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main()
{
    int n,sum=0,a=1,x=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(x<=n)
    {
        sum=sum+a;
        a=a+2;
        x++;
    }
    printf("%d",sum);
    return 0;
}