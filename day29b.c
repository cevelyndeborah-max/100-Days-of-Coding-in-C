//Q58: Find the maximum and minimum element in an array.
#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter number of element in array: ");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    int max=arr[0];
    for(j=0;j<i;j++)
    {
        if(arr[j]>max)
        max=arr[j];
    }
    int min=arr[0];
    for(j=0;j<i;j++)
    {
        if(min>arr[j])
        min=arr[j];
    }
    printf("Max=%d, Min=%d",max,min);
    return 0;
}