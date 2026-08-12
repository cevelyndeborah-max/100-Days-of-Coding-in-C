//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float r;
    float pi=3.14;
    
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    float area=pi*r*r;
    float circumference=2*pi*r;
    printf("Area=%.2f, Circumference=%.2f",area,circumference);
    return 0;
}
