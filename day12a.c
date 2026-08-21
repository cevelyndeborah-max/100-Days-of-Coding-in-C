/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>

int main()
{
    int dd,fine;
    printf("Enter days due:");
    scanf("%d",&dd);
    if(dd<=5&&dd>0)
    {
        fine=dd*2;
        printf("Fine \u20B9%d",fine);
    }
    else if(dd<=10&&dd>5)
    {
        fine=(5*2)+(dd-5)*4;
        printf("Fine \u20B9%d",fine);
    }
    else if(dd<=30&&dd>10)
    {
        fine=(5*2)+(5*4)+(dd-10)*6;
        printf("Fine \u20B9%d",fine);
    }
    else if(dd>30)
    {
        printf("Membership Cancelled");
    }

    return 0;
}
