/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include <stdio.h>

int main()
{
    int unit,bill;
    printf("Enter units :");
    scanf("%d",&unit);
    if(unit<=100&&unit>0)
    {
        bill=unit*5;
        printf("Bill: \u20B9%d",bill);
    }
    else if(unit<=200&&unit>100)
    {
        bill=(100*5)+(unit-100)*7;
        printf("Bill: \u20B9%d",bill);
    }
    else if(unit<=300&&unit>200)
    {
        bill=(100*5)+(100*7)+(unit-200)*10;
        printf("Bill: \u20B9%d",bill);
    }
    else if(unit>300)
    {
        bill=(100*5)+(100*7)+(100*10)+(unit-300)*12;
        printf("Bill: \u20B9%d",bill);    
    }

    return 0;
}