//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    float n,sum;
    printf("Enter the number: ");
    scanf("%f",&n);
    sum = (n*(n+1))/2;
    printf("Sum=%.0f",sum);
 
    return 0;
}