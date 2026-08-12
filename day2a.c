//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    int l,b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);
    
    printf("Area=%d, Perimeter=%d",l*b,2*l+2*b);
    return 0;
}
