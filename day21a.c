//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include<math.h>
int main()
{
    int a,n,place,first,last,middle,digit,count=0;
    printf("Enter n: ");
    scanf("%d",&n);
    a=n;
    last=n%10;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    n=a;
    place=pow(10,count-1);
    first=n/place;
    middle=n-((first*place)+last);
    digit=last*place+middle+first;
    printf("%d",digit);

    return 0;
}