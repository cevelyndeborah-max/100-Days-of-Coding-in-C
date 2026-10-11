/*Q109: Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.*/

#include<stdio.h>
int main()
{
    int n,i,j,k,sum=0,large=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter k: ");
    scanf("%d",&k);
    for(i=0;i<=n-k;i++)
    {
        sum=0;
        for(j=i;j<i+k;j++)
        {
            sum=sum+arr[j];
        }
        if(sum>large)
        {
            large=sum;
        }
    }
    printf("%d",large);
    return 0;
}