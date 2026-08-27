//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main()
{
    int a,n1,n2;
    printf("Enter n1 and n2 : ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        a=n2;
    }
    else
    {
        a=n1;
    }
    while(a>=1)
    {
        if(n1%a==0&&n2%a==0)
        {
            printf("%d",a);
            break;    
        }
        else
        {
            a--;
        }
    }
    return 0;
}