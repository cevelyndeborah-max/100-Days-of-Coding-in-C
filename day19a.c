//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main()
{
    int n1,n2,c,a;
    printf("Enter n1 and n2: ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        c=n1;
    }
    else
    {
        c=n2;
    }
    a=c;
    while(1)
    {
        if(a%n1==0&&a%n2==0)
        {
            printf("%d",a);
            break;
        }
        else
        {
            a++;
        }        
        
    }

    return 0;
}
