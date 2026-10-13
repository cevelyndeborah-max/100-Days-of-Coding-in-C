/*Q111: Write a program to take an integer array arr and an integer k as inputs.
Find the first negative integer in each subarray of size k.
If no negative exists, print 0.*/

#include<stdio.h>
int main()
{
    int n,i,j,k,found;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n<=0)
    return 0;

    int arr[n];

    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter k: ");
    scanf("%d",&k);

    if(k<1||k>n)
    {
        printf("Invalid k");
        return 0;
    }

    for(i=0;i<=n-k;i++)
    {
        found=0;

        for(j=i;j<i+k;j++)
        {
            if(arr[j]<0)
            {
                printf("%d",arr[j]);
                found=1;
                break;
            }
        }

        if(found==0)
        {
            printf("0");
        }

        if(i<n-k)
        {
            printf(" ");
        }
    }

    return 0;
}