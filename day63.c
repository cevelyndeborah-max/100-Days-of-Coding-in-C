/*Q113: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. 
Print the kth smallest element as output.*/

#include<stdio.h>
int main()
{
    int k,i,n,small,j,smallest=0,found=0;
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
    smallest=arr[0];
    for(j=1;j<n;j++)
    {
        if(arr[j]<smallest)
        {
            smallest=arr[j];
        }
    }
    for(i=1;i<k;i++)
    {
        found=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]>smallest)
            {
                if(found==0||arr[j]<small)
                {
                    small=arr[j];
                    found=1;
                }
            }
        }
        smallest=small;
    }
    printf("%d",smallest);
    return 0;
}