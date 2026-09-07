//Q57: Find the sum of array elements.
#include <stdio.h>
int main()
{
    int i,j,sum=0;
    printf("Enter number of element in array: ");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i;j++)
    {
        sum=sum+arr[j];
    }
    printf("%d",sum);
    return 0;
}