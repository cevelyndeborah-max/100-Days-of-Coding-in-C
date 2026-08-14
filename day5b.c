//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
    int t,m,s,h;
    printf("Enter time in seconds: ");
    scanf("%d",&t);
    h=(t/60)/60;
    m=(t/60)%60;
    s=t%60;
    printf("%d:%d:%d",h,m,s);
    return 0;
}