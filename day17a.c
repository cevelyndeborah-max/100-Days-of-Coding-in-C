//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main()
{
    int count=0,b,a,n,c,sum=0,pro=1,counts=0;
    printf("Enter n: ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    n=a;
    while(n>0)
    {
        c=n%10;
        while(counts<count)
        {
            pro=pro*c;
            counts++;
        }
        sum=sum+pro;
        n=n/10;
        counts=0;
        pro=1;
    }
     if(sum==a)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");}
   
    return 0;
}