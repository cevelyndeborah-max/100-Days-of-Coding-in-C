//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,root1,root2;
    printf("Quadratic equation is ax² + bx + c\n");
    printf("Enter values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-(4*a*c);
    root1=(-(b)+sqrt(d))/(2*a);
    root2=(-(b)-sqrt(d))/(2*a);
    
    if(d>0)
    {
        printf("Roots are real and different:%d %d",root1,root2);
    }
    else if(d==0)
    {
        printf("Roots are real and same: %d",root1);
    }
    else
    {
        printf("Roots are complex");
    }
    return 0;
}