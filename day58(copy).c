/*Q108: Write a Program to take an integer array nums.
Print an array answer such that answer[i] is equal to the
product of all the elements of nums except nums[i].*/

#include<stdio.h>
int main()
{
    int n,i,j,product;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int nums[n],answer[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++)
    {
        product=1;

        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                product=product*nums[j];
            }
        }
        answer[i]=product;
    }
    printf("[");
    for(i=0;i<n;i++)
    {
        printf("%d",answer[i]);
        if(i<n-1)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}