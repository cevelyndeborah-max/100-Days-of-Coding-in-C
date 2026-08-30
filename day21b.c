//Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>
int main()
{
    int sum=0,n,a=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(a<n)
    {
        if(n%a==0)
        {
            sum=sum+a;
        }
        a++;
    }
    if(sum==n)
    printf("Perfect number");
    else
    printf("Not perfect number");
    return 0;
}
