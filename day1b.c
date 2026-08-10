//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter a :\n");
    scanf("%f",&a);
    printf("Enter b :\n");
    scanf("%f",&b);
    
    float sum = a+b;
    float difference=a-b;
    float product=a*b;
    float division=a/b;
    
    printf("Sum=%.0f, Diff=%.0f, Product=%.0f, Quotient=%.0f",sum,difference,product,division);
    return 0;
}