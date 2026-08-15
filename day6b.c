//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    if(a!=0)
    {
        if(a<0)
        {
            printf("Negative");
        }
        else
        {
            printf("Postive");
        }
    }
    else
    {
        printf("Zero");
    }

    return 0;
}
