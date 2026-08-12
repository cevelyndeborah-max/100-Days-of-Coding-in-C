//Q6: Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    
    c=a;
    a=b;
    b=c;
    
    printf("After swap: %d %d",a,b);

    return 0;
}