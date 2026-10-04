/*Q106: Write a program to take an array arr[] of integers as input,
the task is to find the next greater element for each element of the array
in order of their appearance in the array. Next greater element of an element
in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element,
then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include<stdio.h>
int main()
{
    int n,i,j,found=0,large=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                large=arr[j];
                found=1;
                break;
            }
        }
        if(found==1)
        {
            printf("%d, ",large);
        }
        else
        {
            printf("-1, ");
        }
        found=0;
        large=0;
    }
    return 0;
}