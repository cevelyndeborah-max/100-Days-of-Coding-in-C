//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main()
{
    float num=2,sum=0,den=3,count=0,n;
    printf("Enter n: ");
    scanf("%f",&n);
    while(count<n)
    {
        sum=sum+(num/den);                         
        num=num+2;                                 
        den=den+4;                               
        count++;                               
    }
    printf("Approximate sum: %.2f",sum);    

    return 0;
}