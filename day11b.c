//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    float cp, sp;
    float profit, loss;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
        profit = ((sp-cp)*100)/cp;
        printf("Profit %.0f%\n",profit);
    }
    else if(sp<cp)
    {
        loss = ((cp-sp)*100)/cp;
        printf("Loss %.0f%\n",loss);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}