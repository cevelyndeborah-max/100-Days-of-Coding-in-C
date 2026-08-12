//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
    float c;
    printf("Enter Celsius:");
    scanf("%f",&c);
    float f=9*c/5+32;
    printf("Farenheit=%.0f",f);
}