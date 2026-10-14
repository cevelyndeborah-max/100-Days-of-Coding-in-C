/*Q112: Write a program to take an integer array arr as input.
Find the maximum sum of any contiguous subarray using Kadane's
algorithm. If all elements are negative, print the largest element.*/

#include<stdio.h>
int main()
{
    int n,i,sum,large;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=arr[0];
    large=arr[0];
    for(i=1;i<n;i++)
    {
        if(sum+arr[i]>arr[i])
        {
            sum=sum+arr[i];
        }
        else
        {
            sum=arr[i];
        }
        if(sum>large)
        {
            large=sum;
        }
    }

    printf("%d",large);
    return 0;
}