/*Q116: Write a program to take an integer array nums
and an integer target as inputs. Find two distinct indices
i and j such that nums[i]+nums[j]==target.
Print the indices or -1 -1 if not found.*/

#include<stdio.h>
int main()
{
    int n,i,j,target,found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int nums[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("Enter target: ");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                printf("%d %d",i,j);
                found=1;
                break;
            }
        }
        if(found==1)
        break;
    }
    if(found==0)
    printf("-1 -1");
    return 0;
}