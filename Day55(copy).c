/*Q105: Write a program to take an integer array nums of size n,
and print the majority element. The majority element is the element 
that appears strictly more than ⌊n / 2⌋ times.
Print -1 if no such element exists. 
Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main()
{
    int i,j,n,cnt=1,found=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt>n/2)
        {
            printf("%d ",arr[i]);
            found=1;
            break;
        }
    }
    if(found!=1)
    {
        printf("-1");
    }
    return 0;
}
