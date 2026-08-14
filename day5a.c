//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include<math.h>

int main()
{
    float p,r,t;
    printf("Enter Principal,rate,time: ");
    scanf("%f%f%f",&p,&r,&t);
    float si=(p*r*t)/100;
    float ci=p*pow(1+r/100,t);
    ci=ci-p;
    printf("Simple Interest=%.0f, Compound Interest=%.2f",si,ci);
    return 0;
}