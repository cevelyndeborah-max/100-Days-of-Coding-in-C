//Q62: Reverse an array without taking extra space.
#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter number of elements: ");
    scanf("%d",&i);
    int arr[i];
    printf("Enter elements: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}