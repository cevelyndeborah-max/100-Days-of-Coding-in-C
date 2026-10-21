/*Q119: Write a program to take an integer array as input.
Only one element will be repeated. Print the repeated element.
Try to find the result in one single iteration.*/

#include<stdio.h>
int main()
{
    int n,i,found=0;
    int seen[101]={0};
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
        if(seen[arr[i]]==1)
        {
            printf("%d",arr[i]);
            found=1;
            break;
        }
        else
        {
            seen[arr[i]]=1;
        }
    }
    if(found==0)
    printf("-1");
    return 0;
}