/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present.*/

#include <stdio.h>
int main()
{
    int i,a,j,found1=0,found2=0;
    printf("Enter number of elements: ");
    scanf("%d",&i);
    int arr[i];
    printf("Enter elements: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("What number do you want to search: ");
    scanf("%d",&a);
    for(j=0;j<i;j++)
    {
        if(arr[j]==a)
        {
            printf("%d,",j);
            found1=1;
            break;
        }
    }
    if(found1!=1)
    printf("-1,");
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]==a)
        {
            printf("%d",j);
            found2=1;
            break;
        }
    }
    if(found2!=1)
    printf("-1");
    return 0;
}